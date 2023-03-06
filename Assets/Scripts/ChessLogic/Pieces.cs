using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public enum PieceType
{
   None = 0, Pawn = 1, Rook = 2, Knight = 3, Bishop = 4, Queen = 5, King = 6
}

public class Pieces : MonoBehaviour
{
    public int team;
    public PieceType ptype;
    public int currentXPos;
    public int currentZPos;
    public int pieceWorth = 0;

    public void MovingToTileRules(Vector3 tilePos)
    {
        GameObject board = GameObject.FindWithTag("BoardLayout");
        Board boardScript = board.GetComponent<Board>();
        //Debug.Log("Move regular piece");
        PieceType type = boardScript.getCurrentPiece().GetComponent<Pieces>().ptype;

        //if statments for all piece types
        if (type == PieceType.Pawn)
        {
            //call pawn method specific rules
        }
        else 
        {
            //nothing currently
        }
    }

    public void TakingPieceRules() 
    {
        //Debug.Log("Take piece at pos");
    }
}
