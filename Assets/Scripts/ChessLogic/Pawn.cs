using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pawn : Pieces
{
    private bool movedFromStartPos;
    [SerializeField] private GameObject[] pawnProOptions;
    public bool currentlyBlocking;

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
                           /* if (temp.z == 0)
                            {
                                //pawnProcalled
                                //boardScript.PawnPromotion(gO);
                            }*/
                        }
                    }
                    else
                    {
                        temp = new Vector3((float)pieceScript.currentXPos, 0f, (float)pieceScript.currentZPos - 2);
                        bool isPieceOnPos = boardScript.isPieceOnTile(temp);
                        if (!isPieceOnPos)
                        {
                            avaiableMoves.Add(temp);
                            /*if (temp.z == 7)
                            {
                                //pawnProcalled
                                //boardScript.PawnPromotion(gO);
                                
                            }*/
                        }

                    }
                }
            }
        }
        counter = 0;
        //boardScript.SetMovesAvailable(avaiableMoves);
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
}
