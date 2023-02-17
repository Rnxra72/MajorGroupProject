using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class PieceMovement : Board
{
    //for testing
    GameObject newPiece;
    List<List<int>> lists = new List<List<int>>();

    //[SerializeField] private Material[] highlightMaterials;//0 = tile highlight, 1 = pieceHighlight

    // XRSimpleInteractable pieceInteractable; //the chess piece being interacted with currently

    // Start is called before the first frame update
    void Start()
    {
        XRSimpleInteractable pieceInteractable = GetComponent<XRSimpleInteractable>();
       pieceInteractable.activated.AddListener(pieceActivated);
    }

    // Update is called once per frame
    void Update()
    {
        
    }


   // [SerializeField] private GameObject[] prefabs;
    //run when a piece is interacted with/set to active (trigger on oculus controller)
    public void pieceActivated(ActivateEventArgs args)
    {
        XRSimpleInteractable pieceInteractable = GetComponent<XRSimpleInteractable>();
        Pieces pieceDetails = pieceInteractable.GetComponent<Pieces>();

        int xPos = pieceDetails.currentXPos; int zPos = pieceDetails.currentZPos;
        Debug.Log("current position: x" + xPos + " z " + zPos);

        ValidTilesArray(pieceDetails);

    }
    public void ValidTilesArray(Pieces pieceDetails)
    {
      /*  //pawn
        if () {
          //  pieceDetails.PieceRules();
        }
        //knight
        else if () {
            //code here
        }
        //king
        else if () { 
            //code here
        }
        //queen
        else if ()
        {
            //code here
        }
        //rook
        else if ()
        {
            //code here
        }
        //bishop
        else if ()
        {
            //code here
        }
      */
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
