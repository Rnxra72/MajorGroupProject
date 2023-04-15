using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Queen : Pieces
{
    // Start is called before the first frame update
    void Start()
    {
        pieceWorth = 9;
    }

    // Update is called once per frame
    void Update()
    {

    }

    public List<Vector3> queenRules(Board boardScript, GameObject gO)
    { 
        List<Vector3> avaiableMoves = new List<Vector3>();
        avaiableMoves = RookMoves(boardScript, gO);
        avaiableMoves.AddRange(BishopMoves(boardScript, gO));

        //boardScript.SetMovesAvailable(avaiableMoves);
        return avaiableMoves;
    }
}
