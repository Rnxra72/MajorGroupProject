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

    public List<Vector3> rookRules(Board boardScript, GameObject gO) 
    {
        List<Vector3> avaiableMoves = new List<Vector3>();
        avaiableMoves = RookMoves(boardScript, gO);
        //boardScript.SetMovesAvailable(avaiableMoves);
        return avaiableMoves;
    }
}
