using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bishop : Pieces
{

    void Start()
    {
        pieceWorth = 3;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public List<Vector3> bishopRules(Board boardScript, GameObject gO, int fistItteration)
    {
        List<Vector3> avaiableMoves = new List<Vector3>();
        Pieces pieceScript = gO.GetComponent<Pieces>();
        avaiableMoves = BishopMoves(boardScript, gO);
        //boardScript.SetMovesAvailable(avaiableMoves);
        

        //remove any positions that would cause check, stop infinte loop with counter
        if(fistItteration == 0)
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
