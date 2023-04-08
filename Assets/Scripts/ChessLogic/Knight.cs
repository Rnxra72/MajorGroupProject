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

    /* public void knightRules(Vector3 tilePos, Board boardScript)
     {
         Debug.Log("Knight Rules");

         Knight knightScipt = boardScript.getCurrentPiece().GetComponent<Knight>();

         int x = (knightScipt.currentXPos);
         int z = (knightScipt.currentZPos);


         //pairs of positions x and z value
         int[,] positions = { 
             { (x-1), (z+2)},
             { (x-2), (z+1)},
             { (x-2), (z-1)},
             { (x-1), (z-2)},
             { (x+1), (z+2)},
             { (x+2), (z+1)},
             { (x+2), (z-1)},
             { (x+1), (z-2)}
         };

         //check all moves
         for (int i = 0; i < 8; i++) 
         {
             if (tilePos.x == positions[i, 0] && tilePos.z == positions[i, 1]) 
             {
                 boardScript.setCurrentMoveValid(true);
             }
         }
     }*/

    public void knightRules(Board boardScript)
    {
        List<Vector3> avaiableMoves = new List<Vector3>();
        Knight knightScipt = boardScript.getCurrentPiece().GetComponent<Knight>();
        Pieces pieceScript = boardScript.getCurrentPiece().GetComponent<Pieces>();

        float x = (float)(knightScipt.currentXPos);
        float z = (float)(knightScipt.currentZPos);
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

        //boardScript.setCurrentMoveValid(true);
        Debug.Log("checking here, King adding Moves");
        boardScript.SetMovesAvailable(avaiableMoves);
    }
}
