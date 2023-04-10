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
        List<Vector3> avaiableMoves = new List<Vector3>();
        avaiableMoves = RookMoves(boardScript);
        boardScript.SetMovesAvailable(avaiableMoves);
    }
}
