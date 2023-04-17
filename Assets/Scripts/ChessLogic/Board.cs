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

    public List<Pieces> currentlyCheckingKing;

    GameObject[] PieceObjects;

    //keep temp versions of kingScripts
    //public Pieces wKingScript;
    //public Pieces bKingScript;
    List<Vector3> GetOutOfCheckOptions = new List<Vector3>();

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
        //wKingScript = chessPieces[4, 0]; wKingScript.currentXPos = 4; wKingScript.currentZPos = 0;
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
        //bKingScript = chessPieces[4, 7]; bKingScript.currentXPos = 4; bKingScript.currentZPos = 7;
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

    //controls a normal game
    public void CreateMovesList(GameObject gO) 
    {
        Pieces pieceScript = getCurrentPiece().GetComponent<Pieces>();

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
    }
    public void HighlightSingleTile(GameObject gameObject)
    {
        Pieces p = gameObject.GetComponent<Pieces>();

        gameObject.GetComponent<MeshRenderer>().material = tileMaterials[1];
    }

    public bool IsMoveACheckPos(Vector3 position, Board boardScript, Pieces kScript, int counter)
    {
        GameObject gO; Pieces piece;
        Vector3 movePos;
        List<Vector3> movesToBeChecked = new List<Vector3>();
        GameObject[] piecesOnBoard = boardScript.GetPiecesOnBoard();
        bool holdResultTemp = false;
        for (int i = 0; i < piecesOnBoard.Length; i++)
        {
            //Debug.Log("Num Here: " + i);
            gO = piecesOnBoard[i];
            piece = gO.GetComponent<Pieces>();


            if (kScript.team != piece.team && piece.ptype != PieceType.King)
            {
                if (piece.ptype == PieceType.Pawn)
                {
                    Pawn pawn = gO.GetComponent<Pawn>();
                    movesToBeChecked = pawn.pawnMoveRules(boardScript, gO, 1);

                    for (int j = 0; j < movesToBeChecked.Count; j++)
                    {
                        movePos = movesToBeChecked[j];
                        if (movePos == position)
                        {
                            //return true;
                            holdResultTemp = true;
                            if (counter == 1) 
                            {
                                currentlyCheckingKing.Add(piece);
                            }
                        }
                    }
                }
                else
                {
                    movesToBeChecked = piece.Rules(gO);

                    for (int j = 0; j < movesToBeChecked.Count; j++)
                    {
                        movePos = movesToBeChecked[j];
                        if (movePos == position)
                        {
                            //return true;
                            holdResultTemp = true;
                            currentlyCheckingKing.Add(piece);
                        }
                    }
                }

            }
        }
        //return false;
        return holdResultTemp;
    }

    //when a piece moves will their next move be able to take king(king cant actually be taken by any piece), IE is king in check currently
    public bool CheckedKing(King wK, King bK, GameObject gO)
    {
        Pieces pScript = gO.GetComponent<Pieces>();
        List<Vector3> movesList = new List<Vector3>();
        Vector3 kingPos;
        if (pScript.team == 1)
        {
            kingPos = new Vector3((float)wK.currentXPos, 0f, (float)wK.currentZPos);
            movesList = pScript.Rules(gO);
            for (int i = 0; i < movesList.Count; i++) 
            {
                if (movesList[i] == kingPos)
                { 
                    wK.SetInCheck(true);
                    Debug.Log("White king in check = " + wK.GetInCheck());
                    return true;
                }
            }
        }
        else 
        {
            kingPos = new Vector3((float)bK.currentXPos, 0f, (float)bK.currentZPos);
            movesList = pScript.Rules(gO);
            for (int i = 0; i < movesList.Count; i++) 
            {
                if (movesList[i] == kingPos) 
                {
                    bK.SetInCheck(true);
                    Debug.Log("black king in check = " + bK.GetInCheck());
                    return true;
                }
            }
        }
        return false;
    }

    public void Stalemate() 
    {
       //if white king not in check && black king not in check
       //whiteKings move list == null
       //blackKings move list == null

       //reroute to draw scene
    }
    //in check game controller
    public void KingInCheckGame(Board boardScript, GameObject pieceOB, King kScript)
    {

        Pieces p = pieceOB.GetComponent<Pieces>();
        
        setCurrentPiece(pieceOB);
        unHighlightAllPieces();
        highlightSeletedPiece(pieceOB);
        List<Vector3> pieceMoves = new List<Vector3>();
        List<Vector3> tempMoves = new List<Vector3>();

        bool checkMate = false;
        //calculate and look to see if checkmate has ocurred
        //bool checkMate = HasCheckMateOccured(boardScript, p, kScript);
        if (checkMate) 
        {
            winSceneRedirect();
        }

        //build a movesList
        if (p.ptype == PieceType.King)
        {
            pieceMoves = kScript.kingRules(boardScript, pieceOB);
        }
        else 
        {
            tempMoves = p.Rules(pieceOB);
            for (int i = 0; i < tempMoves.Count; i++) 
            {
                //if()//any positions match the attacking pieces position
                for (int j = 0; j < currentlyCheckingKing.Count; j++)
                {
                    Vector3 checkPiecePos = new Vector3((float)currentlyCheckingKing[i].currentXPos, 0f, (float)currentlyCheckingKing[i].currentZPos);
                    if (checkPiecePos == tempMoves[i])
                    {
                        pieceMoves.Add(checkPiecePos);
                    }
                }
            }
        }
        SetMovesAvailable(pieceMoves);
        HighlightAllTiles();
    }


    public bool HasCheckMateOccured(Board boardScript, Pieces p, King kScript) 
    {
        List<Vector3> allMoveOptionsStuff = CanGetOutOfCheck(boardScript, p, kScript);

        if (allMoveOptionsStuff.Count < 1 || allMoveOptionsStuff == null)
        {
            //Debug.Log("Game Over, CheckMate");
            return true;
        }
        else 
        {
            //SetGetOutOfCheckOptions(allMoveOptionsStuff);
            return false;
        }
    }

    public List<Vector3> CanGetOutOfCheck(Board boardScript, Pieces p, King kScript) 
    {
        List<Vector3> allMoveOptionsStuff = new List<Vector3>();

        //get all moves king can make that dont put it in another check
        GameObject gameOb = kScript.gameObject;
        List<Vector3> kingMoves = kScript.kingRules(boardScript, gameOb);

        //position of king as vector3
        Vector3 kPos = new Vector3((float)kScript.currentXPos, 0f, (float)kScript.currentZPos);

        GameObject gO; Pieces piece;
        Vector3 movePos;
        List<Vector3> movesToBeChecked = new List<Vector3>();
        GameObject[] piecesOnBoard = boardScript.GetPiecesOnBoard();
        allMoveOptionsStuff.AddRange(kingMoves);//add kings valid moves to all possible moves

        for (int i = 0; i < piecesOnBoard.Length; i++)
        {
            //Debug.Log("Num Here: " + i);
            gO = piecesOnBoard[i];
            piece = gO.GetComponent<Pieces>();

            movePos = new Vector3((float)piece.currentXPos, 0f, (float)piece.currentZPos);
            if (kScript.team == piece.team && piece.ptype != PieceType.King)
            {
                //if()//any positions match the attacking pieces position
                for (int j =0; j < currentlyCheckingKing.Count;  j++) 
                {
                    Vector3 newTeap = new Vector3((float)currentlyCheckingKing[i].currentXPos, 0f, (float)currentlyCheckingKing[i].currentZPos);
                    if (newTeap == movePos) 
                    {
                        
                    }
                }
            }
        }
        Debug.Log("Message here");
        return allMoveOptionsStuff;
    }
}
