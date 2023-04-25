using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.SceneManagement;

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

        GameObject gO = interactable.gameObject;

        GameObject board = GameObject.FindWithTag("BoardLayout");

        Board boardScript = board.GetComponent<Board>();

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
                    bK = piece.GetComponent<King>();
                    boardScript.SetBKingScript(piece);
                }
                else
                {
                    wK = piece.GetComponent<King>();
                    boardScript.SetWKingScript(piece);
                }
            }
        }

        //checks if object clicked is a piece or tile usinga tag
        if (gO.tag == "Piece")
        {
            Pieces p = gO.GetComponent<Pieces>();

            if (boardScript.getPlayerTurn() && p.team == 1 || !boardScript.getPlayerTurn() && p.team == 0)
            {
                //checks for game states
                if (wK.GetInCheck() && p.team == 1)
                {
                    Debug.Log(boardScript.currentlyCheckingKing);
                    boardScript.KingInCheckGame(boardScript, gO, wK);
                }

                else if (bK.GetInCheck() && p.team == 0)
                {
                    Debug.Log(boardScript.currentlyCheckingKing);
                    boardScript.KingInCheckGame(boardScript, gO, bK);
                }
                else if (!wK.GetInCheck() || !bK.GetInCheck())
                {
                    PieceSelectedNormalGame(boardScript, p, gO);
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
        else if (gO.tag == "Tile")
        {
            if (boardScript.getCurrentPiece() != null)
            {
                //movePieceToTile(gameObject, boardScript);

                MoveToTileSelected(gO, boardScript);
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
        
        boardScript.SetOldPos(boardScript.getCurrentPiece().GetComponent<Transform>().position);//setting the piece being moveds old position stored in board
        Pieces[,] p = boardScript.getChessArray();
        boardScript.SetPiecesOldPos(p);
        GameObject[] objects = boardScript.GetPiecesOnBoard();
        boardScript.SetOldBoardGO(objects);


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
                    boardScript.SetWKingScript(piece.GetComponent<King>());
                }
                else
                {
                    bK = piece.GetComponent<King>();
                    boardScript.SetBKingScript(piece.GetComponent<King>());
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


        //when in check if move is valid set player king not in check
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
        //reguar move nothing is in check
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
            p = boardScript.getChessArray();

            bool pieceHere = boardScript.isPieceOnTile(pos);

            if (pieceHere)
            {
                boardScript.removePiece(piecesArray[(int)pos.x, (int)pos.z]);
                //AudioSource.PlayClipAtPoint();
            }

            //audioSource.PlayOneShot(AudioClip audioClip, Float volumeScale);

            boardScript.getCurrentPiece().transform.position = pos;
            boardScript.updateChessArray(pos, 0);


            //if it was a pawn need to say it has moved before
            if (pty == PieceType.Pawn)
            {
                Pawn currentPiece = boardScript.getCurrentPiece().GetComponent<Pawn>();
                currentPiece.SetMovedFromStartPos(true);
                if (currentPiece.team == 1 && (int)pos.z == 7)
                {
                    currentPiece.PawnPromotion(boardScript, currentPiece, pos);
                }
                else if (currentPiece.team == 0 && (int)pos.z == 0)
                {
                    currentPiece.PawnPromotion(boardScript, currentPiece, pos);
                }
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
            //boardScript.setCurrentPiece(null); //lose ref to currently selected piece
            //boardScript.SetMovesAvailable(null);


            //handels illegal move, moving own piece into a check position
            //..........Debug.Log(bK.GetInCheck());
            //.........Debug.Log(wK.GetInCheck());
            ///////////////////////////////////////////////////////////////////////////////
           /* if (boardScript.getPlayerTurn() && bK.GetInCheck() == true)
            {

                wK.SetInCheck(false);
                string message = "Illegal move, piece Own Put King in check";
                GameObject textToUpdate = GameObject.FindWithTag("messageToUser");
                TextOutToUser scriptToUser = textToUpdate.GetComponent<TextOutToUser>();
                scriptToUser.ShowTextMessageToUser(message);

                boardScript.setPlayerTurn(false);
                boardScript.IllegalMoveReset();

                bK.SetInCheck(false);
            }
            else if (!boardScript.getPlayerTurn() && wK.GetInCheck() == true)
            {

                wK.SetInCheck(false);
                string message = "Illegal move, piece Own Put King in check";
                GameObject textToUpdate = GameObject.FindWithTag("messageToUser");
                TextOutToUser scriptToUser = textToUpdate.GetComponent<TextOutToUser>();
                scriptToUser.ShowTextMessageToUser(message);

                boardScript.setPlayerTurn(true);
                boardScript.IllegalMoveReset();
            }*///////////////////////////////////////////////////////////////

            //check if any piece on board puts either king in check
            Vector3 whiteKPos = new Vector3((float)wK.currentXPos, 0f, (float)wK.currentZPos);
            Vector3 blackPos = new Vector3((float)bK.currentXPos, 0f, (float)bK.currentZPos);
            bool hasCheckOccurredWhite = boardScript.IsMoveACheckPos(whiteKPos, boardScript, wK, 1, boardScript.getChessArray());
            bool hasCheckOccurredBlack = boardScript.IsMoveACheckPos(blackPos, boardScript, bK, 1, boardScript.getChessArray());
            if (hasCheckOccurredWhite)
            {
                wK.SetInCheck(true);

                string invalid = "InCheck White";
                GameObject textToUpdate = GameObject.FindWithTag("messageToUser");
                TextOutToUser scriptToUser = textToUpdate.GetComponent<TextOutToUser>();
                scriptToUser.ShowTextMessageToUser(invalid);

                if (boardScript.HasCheckMateOccured(boardScript, wK))
                {
                    boardScript.BTeamWinRedirect();
                }
            }
            if (hasCheckOccurredBlack)
            {
                bK.SetInCheck(true);

                string invalid = "InCheck Black";
                GameObject textToUpdate = GameObject.FindWithTag("messageToUser");
                TextOutToUser scriptToUser = textToUpdate.GetComponent<TextOutToUser>();
                scriptToUser.ShowTextMessageToUser(invalid);

                if (boardScript.HasCheckMateOccured(boardScript, bK))
                {
                    boardScript.WTeamWinRedirect();
                }
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


        //illegal move put own king in Check
        /* Debug.Log(bK.GetInCheck());
         Debug.Log(wK.GetInCheck());
         if(boardScript.getPlayerTurn() && bK.GetInCheck())
         {
             string message = "Illegal move, piece Own Put King in check";
             GameObject textToUpdate = GameObject.FindWithTag("messageToUser");
             TextOutToUser scriptToUser = textToUpdate.GetComponent<TextOutToUser>();
             scriptToUser.ShowTextMessageToUser(message);
             RerouteToEnd(1);
         }
         else if(!boardScript.getPlayerTurn() && wK.GetInCheck())
         {
             string message = "Illegal move, piece Own Put King in check";
             GameObject textToUpdate = GameObject.FindWithTag("messageToUser");
             TextOutToUser scriptToUser = textToUpdate.GetComponent<TextOutToUser>();
             scriptToUser.ShowTextMessageToUser(message);
             RerouteToEnd(0);
         }
        */


        if (!wK.GetInCheck() && !bK.GetInCheck())
        {
            //see if white has any moves left and black has any moves left, reroute to stalemate screen
        }
        boardScript.setCurrentPiece(null);
        
    }


    public void PieceSelectedNormalGame(Board boardScript, Pieces p, GameObject gO)
    {
        boardScript.setCurrentPiece(gO);
        boardScript.unHighlightAllPieces();
        boardScript.highlightSeletedPiece(gO);

        //createMovesList
        boardScript.CreateMovesList(gO);
    }

    public void RerouteToEnd(int winner)
    {
        SceneManager.LoadScene("Win Scene");
        /* if(winner == 1)
         {
             static string message = "White Wins";
             static GameObject GO = GameObject.FindWithTag("GameOver");
             static GameOverScript GameOver = GO.GetComponent<GameOverScript>();
             static GameOver.GameOverMessage(message);
             SceneManager.LoadScene("Win Scene");
         }
         else
         {
             static string message = "Black Wins"; 
             static GameObject GO = GameObject.FindWithTag("GameOver");
             static GameOverScript GameOver = GO.GetComponent<GameOverScript>();
             static GameOver.GameOverMessage(message);
             SceneManager.LoadScene("Win Scene");
         }*/

    }
}
