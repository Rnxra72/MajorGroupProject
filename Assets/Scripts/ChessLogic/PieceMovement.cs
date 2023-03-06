using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class PieceMovement : MonoBehaviour
{
    void Start()
    {
        XRSimpleInteractable interactableObject = GetComponent<XRSimpleInteractable>();

        //interactableObject.activated.AddListener(pieceActivated);
        interactableObject.activated.AddListener(interactableActivated);

    }

    void Update()
    {

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
                Debug.Log("error, No piece selected");//display this outto user
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
        }
        else
        {
            Debug.Log("Not valid move");
        }
    }

}
      /*  public void pieceActivated(ActivateEventArgs args) {
            //getGameObject
            XRSimpleInteractable pieceInteractable = GetComponent<XRSimpleInteractable>();
            //args.GetType();
            Debug.Log("piece name: " + pieceInteractable);
            pieceInteractable.GetType();
            Debug.Log("here: Type: " );
            Pieces tempP = pieceInteractable.GetComponent<Pieces>();

            int tempTeam = tempP.team;//team attributes

            Debug.Log(tempTeam);


            //try moving piece
            pieceInteractable.transform.position = new Vector3(4, 0, 4);


            /* PieceType pType = pieceInteractable.GetComponent<PieceType>();//pieceType

             Pieces pScript = pieceInteractable.GetComponent<Pieces>();//script piece, for attributes in this class
             int tempTeam = pScript.team;//team attributes

             //instatntiate gameobject
             Pieces p = Instantiate(prefabs[(int)pType - 1], transform).GetComponent<Pieces>();

             p.ptype = pType;
             p.team = tempTeam;
             p.GetComponent<MeshRenderer>().material = teamMaterials[tempTeam];
        }*/
