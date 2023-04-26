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

    public List<Vector3> rookRules(Board boardScript, GameObject gO, int itteractionCount)
    {
        List<Vector3> avaiableMoves = new List<Vector3>();
        avaiableMoves = RookMoves(boardScript, gO);
        Pieces pieceScript = gO.GetComponent<Pieces>();
        //boardScript.SetMovesAvailable(avaiableMoves);

        //remove any positions that would cause check, stop infinte loop with counter
        if (itteractionCount == 0)
        {
            if (pieceScript.team == 1)
            {
                Pieces wk = boardScript.GetWKingScript();
                Vector3 wkPos = new Vector3((float)wk.currentXPos, 0f, (float)wk.currentZPos);
                return avaiableMoves = pieceScript.RemoveCheckCausingPos(boardScript, pieceScript, wk, wkPos, avaiableMoves);
            }
            else
            {
                Pieces bk = boardScript.GetBKingScript();
                Vector3 bkPos = new Vector3((float)bk.currentXPos, 0f, (float)bk.currentZPos);
                return avaiableMoves = pieceScript.RemoveCheckCausingPos(boardScript, pieceScript, bk, bkPos, avaiableMoves);
            }
        }
        return avaiableMoves;
    }
}
