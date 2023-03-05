using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class PieceMovement : MonoBehaviour
{
    //for testing
    XRSimpleInteractable currecntlySelectedPiece;

    //[SerializeField] private Material[] highlightMaterials;//0 = tile highlight, 1 = pieceHighlight

    // XRSimpleInteractable pieceInteractable; //the chess piece being interacted with currently

    // Start is called before the first frame update
    void Start()
    {
        XRSimpleInteractable interactableObject = GetComponent<XRSimpleInteractable>();

        //interactableObject.activated.AddListener(pieceActivated);
        interactableObject.activated.AddListener(interactableActivated);
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    // [SerializeField] private GameObject[] prefabs;
    //run when a piece is interacted with/set to active (trigger on oculus controller)
    /*   public void pieceActivated(ActivateEventArgs args)
       {
           XRSimpleInteractable pieceInteractable = GetComponent<XRSimpleInteractable>();
           Pieces pieceDetails = pieceInteractable.GetComponent<Pieces>();

           int xPos = pieceDetails.currentXPos; int zPos = pieceDetails.currentZPos;
           Debug.Log("current position: x" + xPos + " z " + zPos);

           ValidTilesArray(pieceDetails);

       }*/

    //run when interactable clicked
    public void interactableActivated(ActivateEventArgs args) 
    {
        
        XRSimpleInteractable interactable = GetComponent<XRSimpleInteractable>();
        
        if (interactable.tag == "Piece") {
            Debug.Log("hello piece");
            //Vector3 xPos = tileInteractable.GetComponent<Transform>().position;
            currecntlySelectedPiece = interactable;
        }
        else if (interactable.tag == "Tile")
        {
            Debug.Log("Hello tile");
            //tileActivated(interactable);
        }
    }


  /*  public void pieceActivated(currecntlySelectedPiece) 
    {
        //XRSimpleInteractable pieceInteractable = GetComponent<XRSimpleInteractable>();
        //Pieces pieceDetails = pieceInteractable.GetComponent<Pieces>();
        Debug.Log("heelo piece2");
        currecntlySelectedPiece = GetComponent<XRSimpleInteractable>();
    }
*/
    public void tileActivated(XRSimpleInteractable interactable) 
    {
        //XRSimpleInteractable tileInteractable = GetComponent<XRSimpleInteractable>();
        Vector3 xPos = interactable.GetComponent<Transform>().position;
        Debug.Log("hello tile2");
        Debug.Log(xPos);
        currecntlySelectedPiece.transform.position = new Vector3(4, 0, 4);

        //currecntlySelectedPiece
       /* if (currecntlySelectedPiece != null)
        {
            currecntlySelectedPiece.transform.position = xPos;
        }
        else {
            Debug.Log("error");
        }*/
    }

    /* public void tileActivated(ActivateEventArgs args) 
     { 
         //get position of tile
         //does it have a piece on this tile


         //if yes
         //select this piece to be moved

         //if No
         //movePieceTo this tile
     }*/



    public void ValidTilesArray(Pieces pieceDetails)
    {
    
    }

    public void PieceOnTile() { 
    
    }

    public void TileIsValid() { 
        
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
             p.GetComponent<MeshRenderer>().material = teamMaterials[tempTeam];*/
        //}
    }
