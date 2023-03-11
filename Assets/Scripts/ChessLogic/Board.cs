using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;


public class Board : MonoBehaviour
{
    private XRSimpleInteractable currecntlySelectedPiece;

    public Pieces[,] chessPieces;//array for all chess pieces/pieces objects

    int lengthOfBoard = 8; //int tileSize = 1;

    public GameObject boardTiles;

    GameObject[,] tilesArray = new GameObject[8, 8];

    private int wPlayerScore = 0;
    private int bPlayerScore = 0;

    private bool currentMoveValid;


    //for asset type, piece type and colours/materials
    [SerializeField] private GameObject[] prefabs;
    [SerializeField] private Material[] teamMaterials;

    // Start is called before the first frame update
    void Start()
    {
        setStartLayout();
    }

    public void setStartLayout() 
    {
        BoardTilesCreated();
        SpawnAllPieces();
        positionAllPiece();
    }

   public void getPieces()
    {
        Debug.Log("items inPieces: " + chessPieces);
    }

    void BoardTilesCreated()
    {
        for (int i = 0; i < lengthOfBoard; i++)
        {
            for (int j = 0; j < lengthOfBoard; j++)
            {
                tilesArray[i, j] = Instantiate(boardTiles, new Vector3(i, (float)0.01, j), Quaternion.identity);

            }
        }
    }

    private void SpawnAllPieces(){
        chessPieces = new Pieces[lengthOfBoard, lengthOfBoard];

        int whiteTeam = 1, blackTeam = 0;

        //white team
        chessPieces[0, 0] = SpawnOnePiece(PieceType.Rook, whiteTeam);
        chessPieces[1, 0] = SpawnOnePiece(PieceType.Knight, whiteTeam);
        chessPieces[2, 0] = SpawnOnePiece(PieceType.Bishop, whiteTeam);
        
        //black square start


        chessPieces[3, 0] = SpawnOnePiece(PieceType.Queen, whiteTeam);
        chessPieces[4, 0] = SpawnOnePiece(PieceType.King, whiteTeam);
        chessPieces[5, 0] = SpawnOnePiece(PieceType.Bishop, whiteTeam);

        //white square start


        chessPieces[6, 0] = SpawnOnePiece(PieceType.Knight, whiteTeam);
        chessPieces[7, 0] = SpawnOnePiece(PieceType.Rook, whiteTeam);

        //white pawns
        for (int i = 0; i < lengthOfBoard; i++) {
            chessPieces[i, 1] = SpawnOnePiece(PieceType.Pawn, whiteTeam);
        }

        //black team
        chessPieces[0, 7] = SpawnOnePiece(PieceType.Rook, blackTeam);
        chessPieces[1, 7] = SpawnOnePiece(PieceType.Knight, blackTeam);
        chessPieces[2, 7] = SpawnOnePiece(PieceType.Bishop, blackTeam);

        //white square start

        chessPieces[3, 7] = SpawnOnePiece(PieceType.Queen, blackTeam);
        chessPieces[4, 7] = SpawnOnePiece(PieceType.King, blackTeam);
        chessPieces[5, 7] = SpawnOnePiece(PieceType.Bishop, blackTeam);

        //black square start


        chessPieces[6, 7] = SpawnOnePiece(PieceType.Knight, blackTeam);
        chessPieces[7, 7] = SpawnOnePiece(PieceType.Rook, blackTeam);

        for (int i = 0; i < lengthOfBoard; i++)
        {
            chessPieces[i, 6] = SpawnOnePiece(PieceType.Pawn, blackTeam);
        }
    }
    public Pieces SpawnOnePiece(PieceType ptype, int team) {
        Pieces p = Instantiate(prefabs[(int)ptype-1], transform).GetComponent<Pieces>();

        p.ptype = ptype;
        p.team = team;
        p.GetComponent<MeshRenderer>().material = teamMaterials[team];

        return p;
    }


    void positionAllPiece() {
        for (int i = 0; i < lengthOfBoard; i++) {
            for (int j=0; j < lengthOfBoard;  j++) {
                if (chessPieces[i, j] != null) {
                    positionSinglePiece(i, j, true);
                }
            }
        }
    }

    void positionSinglePiece(int i, int j, bool force = false)
    {
        chessPieces[i, j].currentXPos = i;
        chessPieces[i, j].currentZPos = j;
        if (chessPieces[i, j].team == 0) {
           chessPieces[i, j].transform.Rotate(0, 180, 0);
        } 
        chessPieces[i, j].transform.position = new Vector3(i, 0, j);
    }

    //set piece last selected
    public void setCurrentPiece(XRSimpleInteractable piece) 
    {
        this.currecntlySelectedPiece = piece;

    }

    //get last piece selected
    public XRSimpleInteractable getCurrentPiece() {
        return this.currecntlySelectedPiece;
    }

    public void updateChessArray(Vector3 position)
    {

        Pieces tempScript = getCurrentPiece().GetComponent<Pieces>();
        int oldZPos = tempScript.currentZPos;
        int oldXPos = tempScript.currentXPos;
        chessPieces[oldXPos, oldZPos] = null;//removing piece at old position

        tempScript.currentXPos = (int)position.x;
        tempScript.currentZPos = (int)position.z;//changing script pos

        chessPieces[(int)position.x, (int)position.z] = getCurrentPiece().GetComponent<Pieces>();//setting piece at new position
    }

    public Pieces[,] getChessArray() {
        return this.chessPieces;
    }

    public bool TileIsValid(Vector3 tilePos)
    {
        bool pieceAtPos = isPieceOnTile(tilePos);
        if (pieceAtPos)
        {
            //piece at position and oposite team
            //TakePieceRules();
            int teamPieceOnTile = chessPieces[(int)tilePos.x, (int)tilePos.z].team; //[this checks the team of the piece on the tile selected]
            Debug.Log(teamPieceOnTile + " compared to " + getCurrentPiece().GetComponent<Pieces>().team);
            if (teamPieceOnTile == getCurrentPiece().GetComponent<Pieces>().team)
            {
                Debug.Log("invalid move");
                return false;
            }

            //check for pawn due to taking differently than moving
            if (getCurrentPiece().GetComponent<Pieces>().ptype == PieceType.Pawn)
            {
                Pawn pawn = getCurrentPiece().GetComponent<Pawn>();
                pawn.pawnTakeRules(tilePos);
            }
            else 
            {
                getCurrentPiece().GetComponent<Pieces>().Rules(tilePos);
            }

            //remove piece if move is valid
            if (getCurrentMoveValid())
            {
                removePiece(chessPieces[(int)tilePos.x, (int)tilePos.z]);
            }

            //removePiece(tempPiece);
            return getCurrentMoveValid();

        }
        else
        {
            //piece not at position
            getCurrentPiece().GetComponent<Pieces>().Rules(tilePos);
            if (!getCurrentMoveValid())
            {
                return false;
            }
        }
        return true;
    }

    public void removePiece(Pieces tempPiece)
    {
       GameObject gO = tempPiece.gameObject;
        int t = tempPiece.team;
        //update player score
        if (t == 0)
        {
            bPlayerScore += tempPiece.pieceWorth;
            Debug.Log(bPlayerScore);
        }
        else 
        {
            wPlayerScore += tempPiece.pieceWorth;
            Debug.Log(wPlayerScore);
        }

        Destroy(gO);
    }

    public bool isPieceOnTile(Vector3 tilePos)
    {
        if (chessPieces[(int)tilePos.x, (int)tilePos.z] != null) {
            //piece at position already
            return true;
        }
        //no piece on tile
        return false;
    }

    public void setCurrentMoveValid(bool isMoveValid) 
    {
        this.currentMoveValid = isMoveValid;
    }

    public bool getCurrentMoveValid() 
    {
        return this.currentMoveValid;
    }
}
