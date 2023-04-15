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

    public List<Vector3> knightRules(Board boardScript, GameObject gO)
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
        //boardScript.SetMovesAvailable(avaiableMoves);
        return avaiableMoves;
    }
}
