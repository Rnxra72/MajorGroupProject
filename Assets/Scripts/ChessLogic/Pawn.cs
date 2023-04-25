using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pawn : Pieces
{
    private bool movedFromStartPos;
    //[SerializeField] private GameObject[] pawnProOptions;
    public bool currentlyBlocking;
    private Pieces promotionSC;

    // Start is called before the first frame update
    void Start()
    {
        movedFromStartPos = false;
        pieceWorth = 1;
        currentlyBlocking = true;
    }

    public void SetMovedFromStartPos(bool movedFromStartPos) 
    {
        this.movedFromStartPos = movedFromStartPos;
    }
    public bool GetMovedFromStartPos()
    {
        return this.movedFromStartPos;
    }

    public List<Vector3> pawnMoveRules(Board boardScript, GameObject gO, int counter)
    {
        Pieces pieceScript = gO.GetComponent<Pieces>();
        //int forward = (pieceScript.currentZPos + 1), forward2 = (pieceScript.currentZPos + 2);

        //white pieces moves are 1, black pieces moves are 0. [1, 0] single move forward white..
        //int[,] positions = { { (pieceScript.currentZPos - 1), (pieceScript.currentZPos - 2) }, { (pieceScript.currentZPos + 1), (pieceScript.currentZPos + 2) } };
        List<Vector3> avaiableMoves = new List<Vector3>();
        //if piece at position
        Vector3 temp;
        //bool check = false;

        if (pieceScript.team == 1 && pieceScript.currentZPos < 7 || pieceScript.team == 0 && pieceScript.currentZPos > 0)
        {
            //white piece team
            if (pieceScript.team == 1)
            {
                //Debug.Log(pieceScript.currentZPos + 1);
                temp = new Vector3((float)pieceScript.currentXPos, 0f, (float)pieceScript.currentZPos + 1);
                bool isPieceOnPos = boardScript.isPieceOnTile(temp);

                if (!isPieceOnPos && counter < 1) 
                {
                    avaiableMoves.Add(temp);

                    //if (temp.z == 0)
                        //pawnProcalled
                        //boardScript.PawnPromotion();

                    currentlyBlocking = false;
                }
                    

                int zPos = pieceScript.currentZPos + 1;
                
                if (pieceScript.currentXPos < 7) 
                {
                    isPieceOnPos = TakeChecksAdding(avaiableMoves, pieceScript, zPos, boardScript);
                    if (isPieceOnPos) 
                    {
                        temp = new Vector3((float)pieceScript.currentXPos + 1, 0f, (float)zPos);
                        avaiableMoves.Add(temp);
                    }
                    
                }
                if (pieceScript.currentXPos > 0)
                {
                    isPieceOnPos = TakeChecksMinus(avaiableMoves, pieceScript, zPos, boardScript);
                    if (isPieceOnPos)
                    {
                        temp = new Vector3((float)pieceScript.currentXPos - 1, 0f, (float)zPos);
                        avaiableMoves.Add(temp);
                    }
                }
            }

            //black piece team
            else if(pieceScript.team == 0)
            {
                temp = new Vector3((float)pieceScript.currentXPos, 0f, (float)pieceScript.currentZPos - 1);
                bool isPieceOnPos = boardScript.isPieceOnTile(temp);
                if (!isPieceOnPos)
                {
                    avaiableMoves.Add(temp);

                    /*if (temp.z == 7)
                    {
                        //pawnProcalled
                        //boardScript.PawnPromotion(gO);
                    }*/

                        currentlyBlocking = false;
                }

                int zPos = pieceScript.currentZPos - 1;

                if (pieceScript.currentXPos < 7)
                {
                    isPieceOnPos = TakeChecksAdding(avaiableMoves, pieceScript, zPos, boardScript);
                    if (isPieceOnPos || counter == 1)
                    {
                        temp = new Vector3((float)pieceScript.currentXPos + 1, 0f, (float)zPos);
                        avaiableMoves.Add(temp);
                    }

                }
                if (pieceScript.currentXPos > 0)
                {
                    isPieceOnPos = TakeChecksMinus(avaiableMoves, pieceScript, zPos, boardScript);
                    if (isPieceOnPos || counter == 1)
                    {
                        temp = new Vector3((float)pieceScript.currentXPos - 1, 0f, (float)zPos);
                        avaiableMoves.Add(temp);
                    }
                }
            }

            if (!GetMovedFromStartPos() && !currentlyBlocking && counter < 1)
            {
                if (pieceScript.team == 0 && pieceScript.currentZPos > 1 || pieceScript.team == 1 && pieceScript.currentZPos < 6)
                {
                    if (pieceScript.team == 1)
                    {
                        temp = new Vector3((float)pieceScript.currentXPos, 0f, (float)pieceScript.currentZPos + 2);
                        bool isPieceOnPos = boardScript.isPieceOnTile(temp);
                        if (!isPieceOnPos)
                        {
                            avaiableMoves.Add(temp);
                        }
                    }
                    else
                    {
                        temp = new Vector3((float)pieceScript.currentXPos, 0f, (float)pieceScript.currentZPos - 2);
                        bool isPieceOnPos = boardScript.isPieceOnTile(temp);
                        if (!isPieceOnPos)
                        {
                            avaiableMoves.Add(temp);
                        }

                    }
                }
            }
        }

        //remove any positions that would cause check, stop infinte loop with counter
        if (counter == 0) 
        {
            if (pieceScript.team == 1)
            {
                Pieces wk = boardScript.GetWKingScript();
                Vector3 wkPos = new Vector3((float)wk.currentXPos, 0f, (float)wk.currentZPos);
                return avaiableMoves = pieceScript.RemoveCheckCausingPos(boardScript, pieceScript, wk, wkPos, avaiableMoves);
            }
            else
            {
                Pieces bk = boardScript.GetWKingScript();
                Vector3 bkPos = new Vector3((float)bk.currentXPos, 0f, (float)bk.currentZPos);
                return avaiableMoves = pieceScript.RemoveCheckCausingPos(boardScript, pieceScript, bk, bkPos, avaiableMoves);
            }
        }
        return avaiableMoves;
    }
    public bool TakeChecksMinus(List<Vector3> movesList, Pieces pieceScript, int zPos, Board boardScript) 
    {
        Vector3 temp;
        temp = new Vector3((float)pieceScript.currentXPos - 1, 0f, (float)zPos);
        bool tileAtPos = boardScript.isPieceOnTile(temp);
        Pieces pieceOnTile =boardScript.getChessArray()[(int)currentXPos - 1, zPos];

        if (tileAtPos && pieceScript.team != pieceOnTile.team)
        {
            //movesList.Add(temp);
            return true;
        }
        //return movesList;
        return false;
    }
    public bool TakeChecksAdding(List<Vector3> movesList, Pieces pieceScript, int zPos, Board boardScript)
    {
        Vector3 temp;
        temp = new Vector3((float)pieceScript.currentXPos+1, 0f, (float)zPos);
        bool tileAtPos = boardScript.isPieceOnTile(temp);
        Pieces pieceOnTile = boardScript.getChessArray()[(int)currentXPos + 1, zPos];

        if (tileAtPos && pieceScript.team != pieceOnTile.team)
        {
            //movesList.Add(temp);
            return true;
        }
        //return movesList;
        return false;
    }

    //handels pawn promotion after piece reached other side
    public void PawnPromotion(Board boardScript, Pieces pieceCS, Vector3 pos)
    {
        Debug.Log("Pawn promotion");
        //boardScript.getChessArray();
        int x = (int)pos.x; int z = (int)pos.z;
        GameObject game = pieceCS.gameObject;
        //remove
        boardScript.removePiece(pieceCS);
        //SpawnOnePiece
        Pieces temp;

        Vector3 positionOfPawn = new Vector3((float)pos.x, 0f, (float)pos.z);
        //Pieces piece = Instantiate(prefabs[(int)ptype-1], gameObject.transform).GetComponent<Pieces>();
        if (pieceCS.team == 1)
        {
            temp = boardScript.spawnPawnPromotion(PieceType.Queen, 1, positionOfPawn);
        }
        else
        {
            temp = boardScript.spawnPawnPromotion(PieceType.Queen, 0, positionOfPawn);
        }
        //Pieces[,] p = boardScript.getChessArray();

        promotionSC = temp;
        boardScript.updateChessArray(positionOfPawn, 1);
    }

    public Pieces GetPromotion()
    {
        return this.promotionSC;
    }
}
