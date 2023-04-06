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

        if (gameObject.tag == "Piece")
        {

            //checks for player turns
            if (boardScript.getPlayerTurn() && p.team == 1)
            {
                boardScript.setCurrentPiece(gameObject);

                //piece highlighting
                boardScript.unHighlightAllPieces();
                boardScript.highlightSeletedPiece(gameObject);
            }
            else if (!boardScript.getPlayerTurn() && p.team == 0)
            {
                boardScript.setCurrentPiece(gameObject);

                //piece highlighting
                boardScript.unHighlightAllPieces();
                boardScript.highlightSeletedPiece(gameObject);
            }
            else
            {
                Debug.Log("Other Players turn");
            }
        }
        else if (gameObject.tag == "Tile")
        {
            //Debug.Log("Hello tile");

            if (boardScript.getCurrentPiece() != null)
            {
                movePieceToTile(gameObject, boardScript);
            }
            else
            {
                Debug.Log("error, No piece selected");
            }
        }
    }

    public void movePieceToTile(GameObject gameObject, Board boardSript)
    {
        boardSript.setCurrentMoveValid(false);
        Vector3 xPos = gameObject.GetComponent<Transform>().position;

        bool validMove = boardSript.TileIsValid(xPos);
       // Debug.Log("Is tile valid: " + validMove);
        if (validMove)
        {
            //Debug.Log("valid move...if");
            Pieces[,] p = boardSript.getChessArray();

            boardSript.getCurrentPiece().transform.position = xPos;
            boardSript.updateChessArray(xPos);
            // boardSript.setCurrentPiece(null);

            //Debug.Log("Before move: " + boardSript.getPlayerTurn());

            //after valid move change player turn
            if (boardSript.getPlayerTurn())
            {
                boardSript.setPlayerTurn(false);
                //boardSript.unHighlightSinglePiece(boardSript.getCurrentPiece());
            }
            else
            {
                boardSript.setPlayerTurn(true);
            }
            //Debug.Log("After move: " + boardSript.getPlayerTurn());
            boardSript.unHighlightSinglePiece(boardSript.getCurrentPiece());
        }
        else
        {
            Debug.Log("Not valid move");
            boardSript.setCurrentPiece(null);
        }
    }

}
