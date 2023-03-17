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
        GameObject board = GameObject.FindWithTag("BoardLayout");
        Board boardScript = board.GetComponent<Board>();

        if (interactable.tag == "Piece")
        {
            // Debug.Log("hello piece");

            boardScript.setCurrentPiece(interactable);
        }
        else if (interactable.tag == "Tile")
        {
            //Debug.Log("Hello tile");

            if (boardScript.getCurrentPiece() != null)
            {
                movePieceToTile(interactable, boardScript);
            }
            else
            {
                Debug.Log("error, No piece selected");//display this out to user
            }
        }
    }

    public void movePieceToTile(XRSimpleInteractable interactable, Board boardSript)
    {
        boardSript.setCurrentMoveValid(false);
        Vector3 xPos = interactable.GetComponent<Transform>().position;

        bool validMove = boardSript.TileIsValid(xPos);
       // Debug.Log("Is tile valid: " + validMove);
        if (validMove)
        {
            //Debug.Log("valid move...if");
            Pieces[,] p = boardSript.getChessArray();

            boardSript.getCurrentPiece().transform.position = xPos;
            boardSript.updateChessArray(xPos);
            boardSript.setCurrentPiece(null);
        }
        else
        {
            Debug.Log("Not valid move");
            boardSript.setCurrentPiece(null);
        }
    }

}
