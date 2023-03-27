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

    public void queenRules(Vector3 tilePos, Board boardScript)
    {
        Debug.Log("Queen Rules");
        boardScript.setCurrentMoveValid(true);
    }
}
