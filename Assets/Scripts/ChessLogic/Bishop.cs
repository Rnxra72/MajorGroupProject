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

    public List<Vector3> bishopRules(Board boardScript, GameObject gO)
    {
        List<Vector3> avaiableMoves = new List<Vector3>();
        avaiableMoves = BishopMoves(boardScript, gO);
        //boardScript.SetMovesAvailable(avaiableMoves);
        return avaiableMoves;
    }
}
