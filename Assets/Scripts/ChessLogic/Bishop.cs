using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bishop : Pieces
{
    // Start is called before the first frame update
    int tileStartColour;

    void Start()
    {
        pieceWorth = 3;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    /*public void bishopRules(Vector3 tilePos, Board boardScript) 
    {
        Debug.Log("Bishop Rules");

        //if z==z or x==x set moveValid false
        //else preform other checks
        boardScript.setCurrentMoveValid(true);
    }*/

    public void bishopRules(Board boardScript)
    {
        Bishop bishopScript = boardScript.getCurrentPiece().GetComponent<Bishop>();
        Pieces pieceScript = boardScript.getCurrentPiece().GetComponent<Pieces>();
        int x = (bishopScript.currentXPos);
        int z = (bishopScript.currentZPos);
        Vector3 temp; List<Vector3> avaiableMoves = new List<Vector3>();
        int counter = 0;
        int i = x, j = z;
        bool pieceAtPos = false, sameTeam;
        while (i < 7 && !pieceAtPos && j < 7)
        {
            i++;j++; //top left

            temp = new Vector3((float)i, 0f, (float)j);
            pieceAtPos = boardScript.isPieceOnTile(temp);

            if (!pieceAtPos)
                avaiableMoves.Add(temp);

            if (pieceAtPos && counter > 1)
            {
                sameTeam = pieceScript.positionsChecks(temp, boardScript, pieceScript);
                if (!sameTeam)
                    avaiableMoves.Add(temp);
                counter++;
            }

        }
        i = x; j = z;
        pieceAtPos = false; counter = 0;
        while (j > 0 && !pieceAtPos && i < 7)
        {
            j--; i++; //top right

            temp = new Vector3((float)i, 0f, (float)j);
            pieceAtPos = boardScript.isPieceOnTile(temp);

            if (!pieceAtPos)
                avaiableMoves.Add(temp);

            if (pieceAtPos && counter > 1)
            {
                sameTeam = pieceScript.positionsChecks(temp, boardScript, pieceScript);
                if (!sameTeam)
                    avaiableMoves.Add(temp);
                counter++;
            }
        }

        i = x; j = z;
        pieceAtPos = false; counter = 0;
        while (i > 0 && !pieceAtPos && j > 0)
        {
            j--; i--; //bottom right
            temp = new Vector3((float)i, 0f, (float)j);
            pieceAtPos = boardScript.isPieceOnTile(temp);

            if (!pieceAtPos)
                avaiableMoves.Add(temp);

            if (pieceAtPos && counter > 1)
            {
                sameTeam = pieceScript.positionsChecks(temp, boardScript, pieceScript);

                if (!sameTeam)
                    avaiableMoves.Add(temp);

                counter++;
            }

        }
        i = x; j = z;
        pieceAtPos = false; counter = 0;
        while (j < 7 && !pieceAtPos && i > 0)
        {
            j++; i--; //bottom right
            temp = new Vector3((float)i, 0f, (float)j);
            pieceAtPos = boardScript.isPieceOnTile(temp);


            if (!pieceAtPos)
                avaiableMoves.Add(temp);

            if (pieceAtPos && counter > 1)
            {
                sameTeam = pieceScript.positionsChecks(temp, boardScript, pieceScript);
                if (!sameTeam)
                    avaiableMoves.Add(temp);

                counter++;
            }

        }
        boardScript.SetMovesAvailable(avaiableMoves);
    }
}
