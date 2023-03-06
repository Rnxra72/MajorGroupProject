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

    public void pawnMoveRules(Vector3 tilePos) 
    {
        if (!movedFromStartPos) 
        {
            //z+2;, z+1, 1 -2 pieces forward
        }
        else 
        {
            //only 1 piece forward
        }
    }

    public void pawnTakeRules(Vector3 tilePos) 
    {
        //forward+1, side-1, otherside+1 [x+1 , z+1] || [x-1 , z+1]
    }
}
