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
        int forward = (pieceScript.currentZPos+1), forward2 = (pieceScript.currentZPos + 2);

        Debug.Log("pawnMoveRules called");

        if (!movedFromStartPos)
        {
            
            //z+2;, z+1, 1 -2 pieces forward
            if (tilePos.z == forward && tilePos.x == pieceScript.currentXPos)
            {
                Debug.Log("here1 rn");
                boardScript.setCurrentMoveValid(true);
                movedFromStartPos = true;
            }
            else if (tilePos.z == forward2 && tilePos.x == pieceScript.currentXPos)
            {
                Debug.Log("here3 rn");
                boardScript.setCurrentMoveValid(true);
                movedFromStartPos = true;
            }
        }
        else if (tilePos.z == forward && tilePos.x == pieceScript.currentXPos)
        {
            Debug.Log("here rn");
            boardScript.setCurrentMoveValid(true);
            movedFromStartPos = true;
        }
        else {
            boardScript.setCurrentMoveValid(false);
        }
    }

    public void pawnTakeRules(Vector3 tilePos, Board boardScript) 
    {
        //forward+1, side-1, otherside+1 [x+1 , z+1] || [x-1 , z+1]
        Pieces pieceScript = boardScript.getCurrentPiece().GetComponent<Pieces>();
        int right = (pieceScript.currentXPos+1), left = (pieceScript.currentXPos-1), forwardOne = (pieceScript.currentZPos + 1);

        if (tilePos.x == right && tilePos.z == forwardOne)
        {
            boardScript.setCurrentMoveValid(true);
            movedFromStartPos = true;
        }
        else if (tilePos.x == left && tilePos.z == forwardOne)
        {
            boardScript.setCurrentMoveValid(true);
            movedFromStartPos = true;
        }
        else 
        {
            boardScript.setCurrentMoveValid(false);
            
        }
    }
}
