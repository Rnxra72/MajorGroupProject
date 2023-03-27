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

    public void bishopRules(Vector3 tilePos, Board boardScript) 
    {
        Debug.Log("Bishop Rules");

        //if z==z or x==x set moveValid false
        //else preform other checks
        boardScript.setCurrentMoveValid(true);
    }
}
