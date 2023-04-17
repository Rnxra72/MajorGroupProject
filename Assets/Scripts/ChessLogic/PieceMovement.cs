using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class PieceMovement : MonoBehaviour
{
    void Start()
    {
        XRSimpleInteractable interactableObject = GetComponent<XRSimpleInteractable>();
        interactableObject.activated.AddListener(interactableActivated);
    }



    public void interactableActivated(ActivateEventArgs args)
    {
        XRSimpleInteractable interactable = GetComponent<XRSimpleInteractable>();

        //instance of board needed
        GameObject board = GameObject.FindWithTag("BoardLayout");
        Board boardScript = board.GetComponent<Board>();

        //get gameobject from interactable, and script on gameobject
        GameObject gameObject = interactable.gameObject;
        Pieces p = gameObject.GetComponent<Pieces>();
        boardScript.unHighlightAllTiles();
        boardScript.setCurrentMoveValid(false);


        //get king script reference
        King wK = null; King bK = null;
        GameObject[] piecesOnBoard = boardScript.GetPiecesOnBoard();
        for (int i = 0; i < piecesOnBoard.Length; i++)
        {
            Pieces piece = piecesOnBoard[i].GetComponent<Pieces>();
            if (piece.ptype == PieceType.King)
            {
                if (piece.team == 0)
                {
                    wK = piece.GetComponent<King>();
                }
                else
                {
                    bK = piece.GetComponent<King>();
                }
            }
        }

        //checks if object clicked is a piece or tile usinga tag
        if (gameObject.tag == "Piece")
        {
            if (boardScript.getPlayerTurn() && p.team == 1 || !boardScript.getPlayerTurn() && p.team == 0)
            {
                //checks for game states
                if (wK.GetInCheck() && p.team == 1)
                {
                    boardScript.KingInCheckGame(boardScript, gameObject, wK);
                }

                else if (bK.GetInCheck() && p.team == 0)
                {
                    boardScript.KingInCheckGame(boardScript, gameObject, bK);
                }
                else if(!wK.GetInCheck() || !bK.GetInCheck())
                {
                    PieceSelectedNormalGame(boardScript, p, gameObject);
                }
            }
            else
            {
                string message = "Other Players turn";
                GameObject textToUpdate = GameObject.FindWithTag("messageToUser");
                TextOutToUser scriptToUser = textToUpdate.GetComponent<TextOutToUser>();
                scriptToUser.ShowTextMessageToUser(message);
            }
        }
        //checks if gameobject is a tile
        else if (gameObject.tag == "Tile")
        {
            if (boardScript.getCurrentPiece() != null)
            {
                //movePieceToTile(gameObject, boardScript);

                MoveToTileSelected(gameObject, boardScript);

            }
            else
            {
                //Debug.Log("error, No piece selected");
                string message = "error, No piece selected";
                GameObject textToUpdate = GameObject.FindWithTag("messageToUser");
                TextOutToUser scriptToUser = textToUpdate.GetComponent<TextOutToUser>();
                scriptToUser.ShowTextMessageToUser(message);
            }
        }
    }


    public void MoveToTileSelected(GameObject gameObject, Board boardScript) 
    {
        Vector3 pos = gameObject.GetComponent<Transform>().position;//tile position
        Vector3 temp;
        Pieces[,] piecesArray = boardScript.getChessArray();
        PieceType pty = boardScript.getCurrentPiece().GetComponent<Pieces>().ptype;

        //get king script reference
        King wK = null; King bK = null;
        GameObject[] piecesOnBoard = boardScript.GetPiecesOnBoard();
        for (int i = 0; i < piecesOnBoard.Length; i++)
        {
            Pieces piece = piecesOnBoard[i].GetComponent<Pieces>();
            if (piece.ptype == PieceType.King)
            {
                if (piece.team == 1)
                {
                    wK = piece.GetComponent<King>();
                }
                else
                {
                    bK = piece.GetComponent<King>();
                }
            }
        }


        /*//for checkmate
        if (pty == PieceType.King)
        {
            King currentPiece = boardScript.getCurrentPiece().GetComponent<King>();

            if (currentPiece.GetInCheck() && boardScript.GetMovesAvailable() == null || boardScript.GetMovesAvailable().Count < 1) 
            {
                //reroute to checkmate screen
                boardScript.winSceneRedirect();
            }
        }*/

        if (wK.GetInCheck() || bK.GetInCheck()) 
        {
            for (int i = 0; i < boardScript.GetMovesAvailable().Count; i++)
            {
                temp = boardScript.GetMovesAvailable()[i];
                if (pos.x == temp.x && pos.z == temp.z)
                {
                    boardScript.setCurrentMoveValid(true);
                    if (wK.GetInCheck())
                    {
                        wK.SetInCheck(false);
                    }
                    else 
                    {
                        bK.SetInCheck(false);
                    }
                }
            }
        }
        else
        {
            for (int i = 0; i < boardScript.GetMovesAvailable().Count; i++)
            {
                temp = boardScript.GetMovesAvailable()[i];
                if (pos.x == temp.x && pos.z == temp.z)
                {
                    boardScript.setCurrentMoveValid(true);
                }
            }
        }

        if (boardScript.getCurrentMoveValid())
        {
            Pieces[,] p = boardScript.getChessArray();

            bool pieceHere = boardScript.isPieceOnTile(pos);

            if (pieceHere)
            {
                boardScript.removePiece(piecesArray[(int)pos.x, (int)pos.z]);
                //AudioSource.PlayClipAtPoint();
            }

            //audioSource.PlayOneShot(AudioClip audioClip, Float volumeScale);

            boardScript.getCurrentPiece().transform.position = pos;
            boardScript.updateChessArray(pos);


            //if it was a pawn need to say it has moved before
            if (pty == PieceType.Pawn)
            {
                Pawn currentPiece = boardScript.getCurrentPiece().GetComponent<Pawn>();
                currentPiece.SetMovedFromStartPos(true);
            }

            //Debug.Log("Before move: " + boardSript.getPlayerTurn());

            //after valid move change player turn
            if (boardScript.getPlayerTurn())
            {
                boardScript.setPlayerTurn(false);
                //boardSript.unHighlightSinglePiece(boardSript.getCurrentPiece());
            }
            else
            {
                boardScript.setPlayerTurn(true);
            }
            //Debug.Log("After move: " + boardSript.getPlayerTurn());
            boardScript.unHighlightSinglePiece(boardScript.getCurrentPiece());


            //detecting if next move for current piece can take king, then king is in check
            /*if (boardScript.CheckedKing(wK, bK, boardScript.getCurrentPiece()))
            { 
                Pieces piece = boardScript.getCurrentPiece().GetComponent<Pieces>();
                boardScript.currentlyCheckingKing.Add(piece);

                if (boardScript.getPlayerTurn())
                {
                    bK.SetInCheck(true);
                }
                else 
                {
                    wK.SetInCheck(true);
                }

                string invalid = "InCheck";
                GameObject textToUpdate = GameObject.FindWithTag("messageToUser");
                TextOutToUser scriptToUser = textToUpdate.GetComponent<TextOutToUser>();
                scriptToUser.ShowTextMessageToUser(invalid);
                //Debug.Log("Not a valid move");
            }*/

            //reset all back to null
            boardScript.setCurrentPiece(null); //lose ref to currently selected piece
            boardScript.SetMovesAvailable(null);


            //check if any piece on board puts either king in check
            Vector3 whiteKPos = new Vector3((float)wK.currentXPos, 0f, (float)wK.currentZPos);
            Vector3 blackPos = new Vector3((float)bK.currentXPos, 0f, (float)bK.currentZPos);
            bool hasCheckOccurredWhite = boardScript.IsMoveACheckPos(whiteKPos, boardScript, wK, 1);
            bool hasCheckOccurredBlack = boardScript.IsMoveACheckPos(blackPos, boardScript, bK, 1);
            if (hasCheckOccurredWhite)
            {
                wK.SetInCheck(true);

                string invalid = "InCheck White";
                GameObject textToUpdate = GameObject.FindWithTag("messageToUser");
                TextOutToUser scriptToUser = textToUpdate.GetComponent<TextOutToUser>();
                scriptToUser.ShowTextMessageToUser(invalid);
            }
            if (hasCheckOccurredBlack) 
            {
                bK.SetInCheck(true);

                string invalid = "InCheck Black";
                GameObject textToUpdate = GameObject.FindWithTag("messageToUser");
                TextOutToUser scriptToUser = textToUpdate.GetComponent<TextOutToUser>();
                scriptToUser.ShowTextMessageToUser(invalid);
            }
        }
        


        else 
        {
            string invalid = "Not a valid move";
            GameObject textToUpdate = GameObject.FindWithTag("messageToUser");
            TextOutToUser scriptToUser = textToUpdate.GetComponent<TextOutToUser>();
            scriptToUser.ShowTextMessageToUser(invalid);
            //Debug.Log("Not a valid move");
        }
    }



    public void PieceSelectedNormalGame(Board boardScript, Pieces p, GameObject gO) 
    {
        boardScript.setCurrentPiece(gO);
        boardScript.unHighlightAllPieces();
        boardScript.highlightSeletedPiece(gO);

        //createMovesList
        boardScript.CreateMovesList(gO);
    }

}
