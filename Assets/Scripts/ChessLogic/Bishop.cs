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

    public void setTileStartColour(int colour) 
    {
        this.tileStartColour = colour;
    }

    public int getTileStartColour() 
    {
        return this.tileStartColour;
    }

    public void bishopMoveRules(Vector3 tilePos, Board boardScript) 
    {
        
    }

    public void bishopTakeRules(Vector3 tilePos, Board boardScript)
    {

    }
}
