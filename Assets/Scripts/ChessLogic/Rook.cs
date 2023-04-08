using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rook : Pieces
{
    // Start is called before the first frame update
    void Start()
    {
        pieceWorth = 5;
    }


    public void rookRules(Board boardScript)
    {
        Rook rookScipt = boardScript.getCurrentPiece().GetComponent<Rook>();
        Pieces pieceScript = boardScript.getCurrentPiece().GetComponent<Pieces>();
        int x = (rookScipt.currentXPos);
        int z = (rookScipt.currentZPos);
        Vector3 temp; List<Vector3> avaiableMoves = new List<Vector3>();
        int counter = 0;
        int i = x, j=z;
        bool pieceAtPos = false, sameTeam;
        while (i <7 && !pieceAtPos) 
        {
            i++;
            
            temp = new Vector3((float)i, 0f ,(float)z);
            pieceAtPos = boardScript.isPieceOnTile(temp);

            if (!pieceAtPos)
                avaiableMoves.Add(temp);

            if (pieceAtPos && counter > 1)
            {
                sameTeam = pieceScript.positionsChecks(temp, boardScript, pieceScript);
                if (sameTeam)
                    avaiableMoves.Add(temp);
                counter++;
            }

        }
        pieceAtPos = false; counter = 0;
        while (j <7 && !pieceAtPos)
        {
            j++;
            temp = new Vector3((float)x, 0f, (float)j);
            pieceAtPos = boardScript.isPieceOnTile(temp);

            if (!pieceAtPos)
                avaiableMoves.Add(temp);

            if (pieceAtPos && counter > 1) 
            {
                sameTeam = pieceScript.positionsChecks(temp, boardScript, pieceScript);
                if (sameTeam)
                    avaiableMoves.Add(temp);
                counter++;
            }
        }

        i = x; j = z;
        pieceAtPos = false; counter = 0;
        while (i > 0 && !pieceAtPos)
        {
            i--;
            temp = new Vector3((float)i, 0f, (float)z);
            pieceAtPos = boardScript.isPieceOnTile(temp);
             
            if(!pieceAtPos)
                avaiableMoves.Add(temp);

            if (pieceAtPos && counter > 1)
            {
                sameTeam = pieceScript.positionsChecks(temp, boardScript, pieceScript);

                if (sameTeam)
                    avaiableMoves.Add(temp);

                counter++;
            }

        }
        pieceAtPos = false; counter = 0;
        while (j > 0 && !pieceAtPos)
        {
            j--;
            temp = new Vector3((float)x, 0f, (float)j);
            pieceAtPos = boardScript.isPieceOnTile(temp);


            if (!pieceAtPos)
                avaiableMoves.Add(temp);

            if (pieceAtPos && counter > 1)
            {
                sameTeam = pieceScript.positionsChecks(temp, boardScript, pieceScript);
                if (sameTeam)
                    avaiableMoves.Add(temp);
                counter++;
            }

        }
        boardScript.SetMovesAvailable(avaiableMoves);
    }

    public bool checkTeamOfPiece() 
    {
        return true;
    }
}
