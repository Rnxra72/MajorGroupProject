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

    public List<Vector3> kingRules( Board boardScript, GameObject gO)
    {
        List<Vector3> avaiableMoves = new List<Vector3>();
       // King kingScipt = boardScript.getCurrentPiece().GetComponent<King>();
        Pieces pieceScript= gO.GetComponent<Pieces>();


        float x = (float)(pieceScript.currentXPos);
        float z = (float)(pieceScript.currentZPos);
        Vector3 temp;

        //Pieces[,] chessArray = boardScript.getChessArray();
        bool check = false, doesPosCauseCheck = false;

        if (z != 7)
        {
            temp = new Vector3(x, 0f, z + 1);
            check = positionsChecks(temp, boardScript, pieceScript);
            doesPosCauseCheck = boardScript.IsMoveACheckPos(temp, boardScript, pieceScript, 0);
            if (check && !doesPosCauseCheck)
                avaiableMoves.Add(temp);


            if (x != 7)
            {
                temp = new Vector3(x + 1, 0f, z + 1);
                check = positionsChecks(temp, boardScript, pieceScript);
                doesPosCauseCheck = boardScript.IsMoveACheckPos(temp, boardScript, pieceScript, 0);
                if (check && !doesPosCauseCheck)
                    avaiableMoves.Add(temp);

            }
            if (x != 0)
            {
                temp = new Vector3(x - 1, 0f, z + 1);
                check = positionsChecks(temp, boardScript, pieceScript);
                doesPosCauseCheck = boardScript.IsMoveACheckPos(temp, boardScript, pieceScript, 0);
                if (check && !doesPosCauseCheck)
                    avaiableMoves.Add(temp);
            }
        }
        if (z != 0)
        {
            temp = new Vector3(x, 0f, z - 1);
            check = positionsChecks(temp, boardScript, pieceScript);
            doesPosCauseCheck = boardScript.IsMoveACheckPos(temp, boardScript, pieceScript, 0);
            if (check && !doesPosCauseCheck)
                avaiableMoves.Add(temp);

            if (x != 7)
            {
                temp = new Vector3(x + 1, 0f, z - 1);
                check = positionsChecks(temp, boardScript, pieceScript);
                doesPosCauseCheck = boardScript.IsMoveACheckPos(temp, boardScript, pieceScript, 0);
                if (check && !doesPosCauseCheck)
                    avaiableMoves.Add(temp);
            }
            if (x != 0)
            {
                temp = new Vector3(x - 1, 0f, z - 1);
                check = positionsChecks(temp, boardScript, pieceScript);
                doesPosCauseCheck = boardScript.IsMoveACheckPos(temp, boardScript, pieceScript, 0);
                if (check && !doesPosCauseCheck)
                    avaiableMoves.Add(temp);
            }
        }
        if (x != 7)
        {
            temp = new Vector3(x + 1, 0f, z);
            check = positionsChecks(temp, boardScript, pieceScript);
            doesPosCauseCheck = boardScript.IsMoveACheckPos(temp, boardScript, pieceScript, 0);
            if (check && !doesPosCauseCheck)
                avaiableMoves.Add(temp);
        }
        if (x != 0)
        {
            temp = new Vector3(x - 1, 0f, z);
            check = positionsChecks(temp, boardScript, pieceScript);
            doesPosCauseCheck = boardScript.IsMoveACheckPos(temp, boardScript, pieceScript, 0);
            if (check && !doesPosCauseCheck)
                avaiableMoves.Add(temp);
        }
        //boardScript.SetMovesAvailable(avaiableMoves);

        return avaiableMoves;
    }
}
