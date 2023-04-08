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

    /*public void queenRules(Vector3 tilePos, Board boardScript)
    {
        Debug.Log("Queen Rules");
        boardScript.setCurrentMoveValid(true);
    }*/

    public void queenRules(Board boardScript)
    {
       /* Queen queenScript = boardScript.getCurrentPiece().GetComponent<Queen>();
        Pieces pieceScript = boardScript.getCurrentPiece().GetComponent<Pieces>();
        int x = (queenScript.currentXPos);
        int z = (queenScript.currentZPos);
        Vector3 temp; List<Vector3> avaiableMoves = new List<Vector3>();
        int counter = 0;
        int i = x, j = z;
        bool pieceAtPos = false, sameTeam;
       */

    }
}
