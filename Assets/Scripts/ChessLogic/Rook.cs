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

    public void rookRules(Vector3 tilePos, Board boardScript)
    {
        Debug.Log("Rook Rules");

        //[x, z++] , [x, z--] , [x++, z] , [x--, z]

        //check all tiles from piece to tile location
        int tileX = (int)tilePos.x; int tileZ = (int)tilePos.z;
        Rook rookScipt = boardScript.getCurrentPiece().GetComponent<Rook>();

        int x = (rookScipt.currentXPos);
        int z = (rookScipt.currentZPos);


        boardScript.setCurrentMoveValid(false);

        //right
        if (tileX > x && tileZ == z)
        {

        }

        //forward
        else if (tileZ > z && tileX == x)
        {
            boardScript.setCurrentMoveValid(true);
            for (int i = z; i < tileZ; i++)
            {
                //check if piece in the way
                Vector3 temp = new Vector3((float)x, 0.0f, (float)i);

                bool pieceAtPos = boardScript.isPieceOnTile(temp);
                if (pieceAtPos)
                {
                    boardScript.setCurrentMoveValid(false);
                }
            }
        }

        //backwards
        else if (tileZ < z && tileX == x)
        {

        }

        //left
        else if (tileX < x && tileZ == z)
        {

        }

        else 
        {
            boardScript.setCurrentMoveValid(false);
        }



        /*
        //z++
        for (int i = z; i < tileZ; i++) 
        {
            //check if piece in the way
            Vector3 temp = new Vector3((float)x, 0.0f, (float)i);

            bool pieceAtPos = boardScript.isPieceOnTile(temp);
            if (pieceAtPos) 
            {
                boardScript.setCurrentMoveValid(false);
                break;
            }
        }
        */
    }
}
