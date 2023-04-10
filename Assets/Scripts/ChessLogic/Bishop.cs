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

    public void bishopRules(Board boardScript)
    {
        List<Vector3> avaiableMoves = new List<Vector3>();
        avaiableMoves = BishopMoves(boardScript);
        boardScript.SetMovesAvailable(avaiableMoves);
    }
}
