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

    public void kingRules( Board boardScript)
    {
        List<Vector3> avaiableMoves = new List<Vector3>();
       // King kingScipt = boardScript.getCurrentPiece().GetComponent<King>();
        Pieces pieceScript= boardScript.getCurrentPiece().GetComponent<Pieces>();



        /* if (inCheck)
         {
             KingInCheck(pieceScript, boardScript, avaiableMoves);
         }
         else 
         {
             KingNotInCheck(pieceScript, boardScript, avaiableMoves);
         }*/

        KingNotInCheck(pieceScript, boardScript, avaiableMoves);
    }

    public void KingNotInCheck(Pieces pieceScript, Board boardScript, List<Vector3> avaiableMoves) 
    {
        float x = (float)(pieceScript.currentXPos);
        float z = (float)(pieceScript.currentZPos);
        Vector3 temp;

        //Pieces[,] chessArray = boardScript.getChessArray();
        bool check = false;

        if (z != 7)
        {
            temp = new Vector3(x, 0f, z + 1);
            check = positionsChecks(temp, boardScript, pieceScript);
            if (check)
                avaiableMoves.Add(temp);


            if (x != 7)
            {
                temp = new Vector3(x + 1, 0f, z + 1);
                check = positionsChecks(temp, boardScript, pieceScript);
                if (check)
                    avaiableMoves.Add(temp);

            }
            if (x != 0)
            {
                temp = new Vector3(x - 1, 0f, z + 1);
                check = positionsChecks(temp, boardScript, pieceScript);
                if (check)
                    avaiableMoves.Add(temp);
            }
        }
        if (z != 0)
        {
            temp = new Vector3(x, 0f, z - 1);
            check = positionsChecks(temp, boardScript, pieceScript);
            if (check)
                avaiableMoves.Add(temp);

            if (x != 7)
            {
                temp = new Vector3(x + 1, 0f, z - 1);
                check = positionsChecks(temp, boardScript, pieceScript);
                if (check)
                    avaiableMoves.Add(temp);
            }
            if (x != 0)
            {
                temp = new Vector3(x - 1, 0f, z - 1);
                check = positionsChecks(temp, boardScript, pieceScript);
                if (check)
                    avaiableMoves.Add(temp);
            }
        }
        if (x != 7)
        {
            temp = new Vector3(x + 1, 0f, z);
            check = positionsChecks(temp, boardScript, pieceScript);
            if (check)
                avaiableMoves.Add(temp);
        }
        if (x != 0)
        {
            temp = new Vector3(x - 1, 0f, z);
            check = positionsChecks(temp, boardScript, pieceScript);
            if (check)
                avaiableMoves.Add(temp);
        }
        boardScript.SetMovesAvailable(avaiableMoves);
    }


    public void KingInCheck(Pieces pieceScript, Board boardScript, List<Vector3> avaiableMoves)
    {
        boardScript.SetMovesAvailable(avaiableMoves);
    }

}
