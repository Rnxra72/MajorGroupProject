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
        if (gameObject.tag == "Piece")
        {

            //checks for player turns
            if (boardScript.getPlayerTurn() && p.team == 1)
            {
                boardScript.setCurrentPiece(gameObject);

                //piece highlighting
                boardScript.unHighlightAllPieces();
                boardScript.highlightSeletedPiece(gameObject);

                //createMovesList
                boardScript.CreateMovesList();
            }
            else if (!boardScript.getPlayerTurn() && p.team == 0)
            {
                boardScript.setCurrentPiece(gameObject);

                //piece highlighting
                boardScript.unHighlightAllPieces();
                boardScript.highlightSeletedPiece(gameObject);
                boardScript.CreateMovesList();
            }
            else
            {
                //Debug.Log("Other Players turn");
                string message = "Other Players turn";
                GameObject textToUpdate = GameObject.FindWithTag("messageToUser");
                TextOutToUser scriptToUser = textToUpdate.GetComponent<TextOutToUser>();
                scriptToUser.ShowTextMessageToUser(message);
            }
        }
        else if (gameObject.tag == "Tile")
        {
            //Debug.Log("Hello tile");

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
                //Debug.Log("Not a valid move");
            }
        }
    }

    public void MoveToTileSelected(GameObject gameObject, Board boardScript) 
    {
        Vector3 pos = gameObject.GetComponent<Transform>().position;//tile position
        Vector3 temp;
        Pieces[,] piecesArray = boardScript.getChessArray();
        Debug.Log("checking here, move selected");
        for (int i = 0; i < boardScript.GetMovesAvailable().Count; i++) 
        {
            temp = boardScript.GetMovesAvailable()[i];
            if (pos.x == temp.x && pos.z == temp.z) 
            {
                Debug.Log("valid move");
                boardScript.setCurrentMoveValid(true);
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
            // boardSript.setCurrentPiece(null);


            //if it was a pawn need to say it has moved before
            PieceType pty = boardScript.getCurrentPiece().GetComponent<Pieces>().ptype;
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
            boardScript.setCurrentPiece(null); //lose ref to currently selected piece
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
}
