using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Knight : Pieces
{
    // Start is called before the first frame update
    void Start()
    {
        pieceWorth = 3;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void knightRules(Vector3 tilePos, Board boardScript)
    {
        Debug.Log("Knight Rules");

        Knight knightScipt = boardScript.getCurrentPiece().GetComponent<Knight>();

        int x = (knightScipt.currentXPos);
        int z = (knightScipt.currentZPos);
        

        //pairs of positions x and z value
        int[,] positions = { 
            { (x-1), (z+2)},
            { (x-2), (z+1)},
            { (x-2), (z-1)},
            { (x-1), (z-2)},
            { (x+1), (z+2)},
            { (x+2), (z+1)},
            { (x+2), (z-1)},
            { (x+1), (z-2)}
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
