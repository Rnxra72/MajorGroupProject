using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class King : Pieces
{

    // Start is called before the first frame update
    void Start()
    {
        pieceWorth = 0;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void kingRules( Board boardScript)
    {
        List<Vector3> avaiableMoves = new List<Vector3>();
        King kingScipt = boardScript.getCurrentPiece().GetComponent<King>();
        Pieces pieceScript= boardScript.getCurrentPiece().GetComponent<Pieces>();

        float x = (float)(kingScipt.currentXPos);
        float z = (float)(kingScipt.currentZPos);
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

    
}
