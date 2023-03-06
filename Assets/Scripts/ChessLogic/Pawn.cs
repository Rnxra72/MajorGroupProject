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

    // Update is called once per frame
    void Update()
    {
        
    }
    public void MovingToTileRules()
    {
        //Debug.Log("Move regular piece");
    }

    public void TakingPieceRules()
    {
        //Debug.Log("Take piece at pos");

    }
}
