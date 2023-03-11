using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pawn : Pieces
{
    bool movedFromStartPos;

    // Start is called before the first frame update
    void Start()
    {
        movedFromStartPos = false;
        pieceWorth = 1;
    }

    public void pawnMoveRules(Vector3 tilePos, Board boardScript)
    {
        Pieces pieceScript = boardScript.getCurrentPiece().GetComponent<Pieces>();
        //int forward = (pieceScript.currentZPos + 1), forward2 = (pieceScript.currentZPos + 2);

        //white pieces moves are 1, black pieces moves are 0. [1, 0] single move forward white..
        int[,] positions ={ { (pieceScript.currentZPos - 1), (pieceScript.currentZPos - 2) }, { (pieceScript.currentZPos + 1), (pieceScript.currentZPos + 2) } };

        //Debug.Log("this here" + positions[pieceScript.team, 0]);
        if (!movedFromStartPos)
        {
            for (int i=0; i<2; i++) 
            {
                if (tilePos.z == positions[pieceScript.team, i] && tilePos.x == pieceScript.currentXPos) 
                {
                    boardScript.setCurrentMoveValid(true);
                    movedFromStartPos = true;
                }
            }
        }
        else if (tilePos.z == positions[pieceScript.team, 0] && tilePos.x == pieceScript.currentXPos)
        {
            boardScript.setCurrentMoveValid(true);
            movedFromStartPos = true;
        }
        else {
            boardScript.setCurrentMoveValid(false);
        }
    }

    public void pawnTakeRules(Vector3 tilePos) 
    {
        GameObject board = GameObject.FindWithTag("BoardLayout");
        Board boardScript = board.GetComponent<Board>();

        Pieces pieceScript = boardScript.getCurrentPiece().GetComponent<Pieces>();
        int right = (pieceScript.currentXPos + 1), left = (pieceScript.currentXPos - 1);
        
        int[] offset = { (pieceScript.currentZPos -1), (pieceScript.currentZPos + 1) };//black0, white1

        if (tilePos.x == right && tilePos.z == offset[pieceScript.team])
        {
            boardScript.setCurrentMoveValid(true);
            movedFromStartPos = true;
        }
        else if (tilePos.x == left && tilePos.z == offset[pieceScript.team])
        {
            boardScript.setCurrentMoveValid(true);
            movedFromStartPos = true;
        }
        else 
        {
            boardScript.setCurrentMoveValid(false);
        }
    }

    //handles pawn promotion
    public void pawnPromotion() 
    {
        
    }
}
