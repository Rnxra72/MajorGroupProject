using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pawn : Pieces
{
    bool movedFromStartPos;
    

    // Start is called before the first frame update
    void Start()
    {
        movedFromStartPos = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public new void PieceRules() { 
    }
}
