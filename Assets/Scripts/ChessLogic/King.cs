using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class King : Pieces
{ 
    // Start is called before the first frame update
    void Start()
    {
        pieceWorth = 0;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void kingRules(Vector3 tilePos, Board boardScript) {
        Debug.Log("King Rules");

        King kingScipt = boardScript.getCurrentPiece().GetComponent<King>();

        int x = (kingScipt.currentXPos);
        int z = (kingScipt.currentZPos);


        //pairs of positions x and z value
        int[,] positions = {
            { (x), (z+1)},
            { (x), (z-1)},
            { (x+1), (z+1)},
            { (x+1), (z)},
            { (x+1), (z-1)},
            { (x-1), (z+1)},
            { (x-1), (z)},
            { (x-1), (z-1)}
        };

        //check all moves
        for (int i = 0; i < 8; i++)
        {
            if (tilePos.x == positions[i, 0] && tilePos.z == positions[i, 1])
            {
                boardScript.setCurrentMoveValid(true);
            }
        }
    }

}
