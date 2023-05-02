using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class King : Pieces
{

    private bool inCheck;
    private bool movedFromStartPos;

    // Start is called before the first frame update
    void Start()
    {
        pieceWorth = 0;
        inCheck = false;
        movedFromStartPos = false;
    }

    public void SetInCheck(bool inCheck)
    {
        this.inCheck = inCheck;
    }
    public bool GetInCheck() 
    {
        return this.inCheck;
    }

    public List<Vector3> kingRules( Board boardScript, GameObject gO, int counter)
    {
        List<Vector3> avaiableMoves = new List<Vector3>();
        Pieces pieceScript= gO.GetComponent<Pieces>();


        float x = (float)(pieceScript.currentXPos);
        float z = (float)(pieceScript.currentZPos);
        Vector3 temp;

        bool check = false, doesPosCauseCheck = false;

        if (z != 7 && counter == 0)
        {
            temp = new Vector3(x, 0f, z + 1);
            check = positionsChecks(temp, boardScript, pieceScript);
            doesPosCauseCheck = boardScript.IsMoveACheckPos(temp, boardScript, pieceScript, 0, boardScript.getChessArray());
            if (check && !doesPosCauseCheck)
                avaiableMoves.Add(temp);


            if (x != 7 && counter == 0)
            {
                temp = new Vector3(x + 1, 0f, z + 1);
                check = positionsChecks(temp, boardScript, pieceScript);
                doesPosCauseCheck = boardScript.IsMoveACheckPos(temp, boardScript, pieceScript, 0, boardScript.getChessArray());
                if (check && !doesPosCauseCheck)
                    avaiableMoves.Add(temp);

            }
            if (x != 0 && counter == 0)
            {
                temp = new Vector3(x - 1, 0f, z + 1);
                check = positionsChecks(temp, boardScript, pieceScript);
                doesPosCauseCheck = boardScript.IsMoveACheckPos(temp, boardScript, pieceScript, 0, boardScript.getChessArray());
                if (check && !doesPosCauseCheck)
                    avaiableMoves.Add(temp);
            }
        }
        if (z != 0 && counter == 0)
        {
            temp = new Vector3(x, 0f, z - 1);
            check = positionsChecks(temp, boardScript, pieceScript);
            doesPosCauseCheck = boardScript.IsMoveACheckPos(temp, boardScript, pieceScript, 0, boardScript.getChessArray());
            if (check && !doesPosCauseCheck)
                avaiableMoves.Add(temp);

            if (x != 7 && counter == 0)
            {
                temp = new Vector3(x + 1, 0f, z - 1);
                check = positionsChecks(temp, boardScript, pieceScript);
                doesPosCauseCheck = boardScript.IsMoveACheckPos(temp, boardScript, pieceScript, 0, boardScript.getChessArray());
                if (check && !doesPosCauseCheck)
                    avaiableMoves.Add(temp);
            }
            if (x != 0 && counter == 0)
            {
                temp = new Vector3(x - 1, 0f, z - 1);
                check = positionsChecks(temp, boardScript, pieceScript);
                doesPosCauseCheck = boardScript.IsMoveACheckPos(temp, boardScript, pieceScript, 0, boardScript.getChessArray());
                if (check && !doesPosCauseCheck)
                    avaiableMoves.Add(temp);
            }
        }
        if (x != 7 && counter == 0)
        {
            temp = new Vector3(x + 1, 0f, z);
            check = positionsChecks(temp, boardScript, pieceScript);
            doesPosCauseCheck = boardScript.IsMoveACheckPos(temp, boardScript, pieceScript, 0, boardScript.getChessArray());
            if (check && !doesPosCauseCheck)
                avaiableMoves.Add(temp);
        }
        if (x != 0 && counter == 0)
        {
            temp = new Vector3(x - 1, 0f, z);
            check = positionsChecks(temp, boardScript, pieceScript);
            doesPosCauseCheck = boardScript.IsMoveACheckPos(temp, boardScript, pieceScript, 0, boardScript.getChessArray());
            if (check && !doesPosCauseCheck)
                avaiableMoves.Add(temp);
        }
        //remove any positions that would cause check, stop infinte loop with counter
        if (counter == 0)
        {
            if (pieceScript.team == 1)
            {
                Pieces wk = boardScript.GetWKingScript();
                if (boardScript.getCurrentPiece().GetComponent<Pieces>().ptype == PieceType.King) 
                {
                    wk = pieceScript;
                }
                Vector3 wkPos = new Vector3((float)wk.currentXPos, 0f, (float)wk.currentZPos);
                return avaiableMoves = pieceScript.RemoveCheckCausingPos(boardScript, pieceScript, wk, wkPos, avaiableMoves);
            }
            else
            {
                Pieces bk = boardScript.GetBKingScript();
                if (boardScript.getCurrentPiece().GetComponent<Pieces>().ptype == PieceType.King)
                {
                    bk = pieceScript;
                }
                Vector3 bkPos = new Vector3((float)bk.currentXPos, 0f, (float)bk.currentZPos);
                return avaiableMoves = pieceScript.RemoveCheckCausingPos(boardScript, pieceScript, bk, bkPos, avaiableMoves);
            }
        }
        return avaiableMoves;
    }
}
