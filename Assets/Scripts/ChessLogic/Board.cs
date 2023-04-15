using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.SceneManagement;


public class Board : MonoBehaviour
{
    private GameObject currecntlySelectedPiece;

    public Pieces[,] chessPieces;//array for all chess pieces/pieces objects

    int lengthOfBoard = 8; //int tileSize = 1;

    public GameObject boardTiles;

    private List<Vector3> avaiableMoves = new List<Vector3>();

    GameObject[,] tilesArray = new GameObject[8, 8];

    private int wPlayerScore = 0;
    private int bPlayerScore = 0;
    private bool playerTurn;
    public Material[] tileMaterials;

    private bool currentMoveValid;

    public Material pieceSelectedMaterial;

    GameObject[] PieceObjects;

    //for asset type, piece type and colours/materials
    [SerializeField] private GameObject[] prefabs;
    [SerializeField] private Material[] teamMaterials;

    // Start is called before the first frame update
    void Start()
    {
        setStartLayout();
        playerTurn = true;
    }

    public void setStartLayout() 
    {
        BoardTilesCreated();
        SpawnAllPieces();
        positionAllPiece();
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
    public void setCurrentPiece(GameObject piece) 
    {
        this.currecntlySelectedPiece = piece;
    }

    //get last piece selected
    public GameObject getCurrentPiece() {
        return this.currecntlySelectedPiece;
    }

    //used for changing turns
    public void setPlayerTurn(bool playerTurn)
    {
        this.playerTurn = playerTurn;
    }

    public bool getPlayerTurn()
    {
        return this.playerTurn;
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

    public void CreateMovesList() 
    {
        Pieces pieceScript = getCurrentPiece().GetComponent<Pieces>();
        //List<Vector3> movesToBeChecked = new List<Vector3>();
        //movesToBeChecked = pieceScript.Rules(getCurrentPiece());
        SetMovesAvailable(pieceScript.Rules(getCurrentPiece())); 
        //SetMovesAvailable(movesToBeChecked);
        HighlightAllTiles();
        //Debug.Log("checking here, CreateMoveList");
    }

    public void SetMovesAvailable(List<Vector3> avaiableMoves) 
    {
        this.avaiableMoves = avaiableMoves;
    }

    public List<Vector3> GetMovesAvailable()
    {
        return this.avaiableMoves;
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

    public GameObject[] GetPiecesOnBoard() 
    {
        PieceObjects = GameObject.FindGameObjectsWithTag("Piece");
        return PieceObjects;
    }

    public void setCurrentMoveValid(bool isMoveValid) 
    {
        this.currentMoveValid = isMoveValid;
    }

    public bool getCurrentMoveValid() 
    {
        return this.currentMoveValid;
    }

    public void winSceneRedirect()
    {
        SceneManager.LoadScene("WinScene");
    }

    public void loseSceneRedirect()
    {
        SceneManager.LoadScene("LoseScene");
    }
    public void drawSceneRedirect()
    {
        SceneManager.LoadScene("DrawScene");
    }

    public void highlightSeletedPiece(GameObject selected)
    {
        selected.GetComponent<MeshRenderer>().material = pieceSelectedMaterial;
    }

    //highlighting piece selected by player
    public void unHighlightAllPieces()
    {
        for (int i = 0; i < GetPiecesOnBoard().Length; i++)
        {
            unHighlightSinglePiece(GetPiecesOnBoard()[i]);
        }
    }
    public void unHighlightSinglePiece(GameObject gameObject)
    {
        Pieces p = gameObject.GetComponent<Pieces>();

        gameObject.GetComponent<MeshRenderer>().material = teamMaterials[p.team];
    }

    public void unHighlightAllTiles()
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                unHighlightSingleTile(tilesArray[i, j]);
            }
        }
    }
    public void unHighlightSingleTile(GameObject gameObject)
    {
        Pieces p = gameObject.GetComponent<Pieces>();

        gameObject.GetComponent<MeshRenderer>().material = tileMaterials[0];
    }

    //available moves for that piece highlighting
    public void HighlightAllTiles()
    {
        for (int i = 0;  i < GetMovesAvailable().Count; i++) {
            Vector3 vect = GetMovesAvailable()[i];
            int tempX = (int)vect.x; int tempZ = (int)vect.z;
            GameObject gO = tilesArray[tempX, tempZ];
            HighlightSingleTile(gO);
        }
        Debug.Log("checking here, Highlight All tile");
    }
    public void HighlightSingleTile(GameObject gameObject)
    {
        Pieces p = gameObject.GetComponent<Pieces>();

        gameObject.GetComponent<MeshRenderer>().material = tileMaterials[1];
        Debug.Log("checking here, Highlight Single tile");
    }



    //when a piece moves will their next move be able to take king(king cant actually be taken by any piece), IE is king in check currently
    /*public void HasCheckOcurred() 
    {
        Pieces p = getCurrentPiece().GetComponent<Pieces>();
        p.Rules();

        //loop here arrays, if king at pos
        for (int i = 0; i < GetMovesAvailable().Count; i++) 
        {
            Vector3 temp = GetMovesAvailable()[i];
            Pieces pieceScript = getChessArray()[(int)temp.x, (int)temp.z];
            if (pieceScript.ptype == PieceType.King)
            {
                King k = getCurrentPiece().GetComponent<King>();
                k.SetInCheck(true);

            }
        }
    }*/
    public void Stalemate() 
    {
        
    }
}
