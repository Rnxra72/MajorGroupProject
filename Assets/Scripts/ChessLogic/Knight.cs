using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Knight : Pieces
{
    // Start is called before the first frame update
    void Start()
    {
        pieceWorth = 3;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public List<Vector3> knightRules(Board boardScript, GameObject gO, int itteractionCount)
    {
        List<Vector3> avaiableMoves = new List<Vector3>();
        Pieces pieceScript = gO.GetComponent<Pieces>();

        float x = (float)(pieceScript.currentXPos);
        float z = (float)(pieceScript.currentZPos);
        Vector3 temp;

        //Pieces[,] chessArray = boardScript.getChessArray();
        bool check = false;



        if (x > 0) 
        {
            if (x > 1) 
            {
                if (z > 0) 
                {
                    temp = new Vector3(x-2, 0f, z - 1);
                    check = positionsChecks(temp, boardScript, pieceScript);
                    if (check)
                        avaiableMoves.Add(temp);
                }
                if (z < 7) 
                {
                    temp = new Vector3(x - 2, 0f, z + 1);
                    check = positionsChecks(temp, boardScript, pieceScript);
                    if (check)
                        avaiableMoves.Add(temp);
                }
            }
            if (z > 1) 
            {
                temp = new Vector3(x - 1, 0f, z - 2);
                check = positionsChecks(temp, boardScript, pieceScript);
                if (check)
                    avaiableMoves.Add(temp);
            }
            if (z < 6)
            {
                temp = new Vector3(x - 1, 0f, z + 2);
                check = positionsChecks(temp, boardScript, pieceScript);
                if (check)
                    avaiableMoves.Add(temp);
            }
        }
        if (x < 7) 
        {
            if (x < 6)
            {
                if (z > 0)
                {
                    temp = new Vector3(x + 2, 0f, z - 1);
                    check = positionsChecks(temp, boardScript, pieceScript);
                    if (check)
                        avaiableMoves.Add(temp);
                }
                if (z < 7)
                {
                    temp = new Vector3(x + 2, 0f, z + 1);
                    check = positionsChecks(temp, boardScript, pieceScript);
                    if (check)
                        avaiableMoves.Add(temp);
                }
            }
            if (z > 1)
            {
                temp = new Vector3(x + 1, 0f, z - 2);
                check = positionsChecks(temp, boardScript, pieceScript);
                if (check)
                    avaiableMoves.Add(temp);
            }
            if (z < 6)
            {
                temp = new Vector3(x + 1, 0f, z + 2);
                check = positionsChecks(temp, boardScript, pieceScript);
                if (check)
                    avaiableMoves.Add(temp);
            }
        }
        //remove any positions that would cause check, stop infinte loop with counter
        if (itteractionCount == 0)
        {
            if (pieceScript.team == 1)
            {
                Pieces wk = boardScript.GetWKingScript();
                Vector3 wkPos = new Vector3((float)wk.currentXPos, 0f, (float)wk.currentZPos);
                return avaiableMoves = pieceScript.RemoveCheckCausingPos(boardScript, pieceScript, wk, wkPos, avaiableMoves);
            }
            else
            {
                Pieces bk = boardScript.GetBKingScript();
                Vector3 bkPos = new Vector3((float)bk.currentXPos, 0f, (float)bk.currentZPos);
                return avaiableMoves = pieceScript.RemoveCheckCausingPos(boardScript, pieceScript, bk, bkPos, avaiableMoves);
            }
        }
        return avaiableMoves;
    }
}
