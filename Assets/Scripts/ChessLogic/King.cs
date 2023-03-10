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
    public void kingMoveRules(Vector3 tilePos, Board boardScript) {
        Debug.Log("this is a king");
    }

    public void kingTakeRules(Vector3 tilePos, Board boardScript)
    {

    }

}
