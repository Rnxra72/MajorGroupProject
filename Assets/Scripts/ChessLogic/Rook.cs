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
            boardScript.setCurrentMoveValid(true);
            for (int i = x; i < tileX; i++)
            {
                //check if piece in the way
                Vector3 temp = new Vector3((float)i, 0.0f, (float)z);

                bool pieceAtPos = boardScript.isPieceOnTile(temp);
                /* if (pieceAtPos)
                 {
                     //check colour
                     Pieces[,] chessArray = boardScript.getChessArray();
                     Pieces p = chessArray[x, i];
                     if (p.team == rookScipt.team) 
                     {
                         boardScript.setCurrentMoveValid(false);
                     }
                 }*/
            }
        }

        //forward
        else if (tileZ > z && tileX == x)
        {
            boardScript.setCurrentMoveValid(false);
            for (int i = z; i < tileZ; i++)
            {
                //check if piece in the way
                Vector3 temp = new Vector3((float)x, 0.0f, (float)i);
                Debug.Log(temp); bool pieceAtPos = false;
                pieceAtPos = boardScript.isPieceOnTile(temp);
                Debug.Log(pieceAtPos);
                if (!pieceAtPos)
                {
                    boardScript.setCurrentMoveValid(true);
                    /*//check colour
                    Pieces[,] chessArray = boardScript.getChessArray();
                    Pieces p = chessArray[x, i];
                    if (p.team == rookScipt.team) 
                    {
                        boardScript.setCurrentMoveValid(false);
                        //Debug.Log("this here");
                    }*/
                }
            }
        }

        //backwards
        else if (tileZ < z && tileX == x)
        {
            boardScript.setCurrentMoveValid(true);
            for (int i = z; i < tileZ; i--)
            {
                //check if piece in the way
                Vector3 temp = new Vector3((float)x, 0.0f, (float)i);

                bool pieceAtPos = boardScript.isPieceOnTile(temp);
                /* if (pieceAtPos)
                 {
                     //check colour
                     Pieces[,] chessArray = boardScript.getChessArray();
                     Pieces p = chessArray[x, i];
                     if (p.team == rookScipt.team) 
                     {
                         boardScript.setCurrentMoveValid(false);
                     }
                 }*/
            }
        }

        //left
        else if (tileX < x && tileZ == z)
        {
            boardScript.setCurrentMoveValid(true);
            for (int i = x; i < tileX; i--)
            {
                //check if piece in the way
                Vector3 temp = new Vector3((float)i, 0.0f, (float)z);

                bool pieceAtPos = boardScript.isPieceOnTile(temp);
                /* if (pieceAtPos)
                 {
                     //check colour
                     Pieces[,] chessArray = boardScript.getChessArray();
                     Pieces p = chessArray[x, i];
                     if (p.team == rookScipt.team) 
                     {
                         boardScript.setCurrentMoveValid(false);
                     }
                 }*/
            }
        }

        else 
        {
            boardScript.setCurrentMoveValid(false);
        }
    }
}
