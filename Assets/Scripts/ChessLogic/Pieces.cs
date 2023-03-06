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
        GameObject piece = boardScript.getCurrentPiece().gameObject;
        PieceType type = piece.GetComponent<Pieces>().ptype;

        //if statments for all piece types
        if (type == PieceType.Pawn)
        {
            //Debug.Log("moveing pawn");
            //call pawn method specific rules
            Pawn pawnScript = piece.GetComponent<Pawn>(); //insatance of pawn script
            pawnScript.pawnMoveRules(tilePos, boardScript);
        }
        else if (type == PieceType.King)
        {
            //call pawn method specific rules
            King kingScript = piece.GetComponent<King>(); 
            kingScript.KingMove(tilePos, boardScript);
        }
        else if (type == PieceType.Queen)
        {
            
        }
        else if (type == PieceType.Knight)
        {
            
        }
        else if (type == PieceType.Rook)
        {
            
        }
        else if (type == PieceType.Bishop)
        {
            
        }
    }

    public void TakingPieceRules(Vector3 tilePos) 
    {
        GameObject board = GameObject.FindWithTag("BoardLayout");
        Board boardScript = board.GetComponent<Board>();
        //Debug.Log("Move regular piece");
        GameObject piece = boardScript.getCurrentPiece().gameObject;
        PieceType type = piece.GetComponent<Pieces>().ptype;

        //Debug.Log("Take piece at pos");

        //if statments for all piece types
        if (type == PieceType.Pawn)
        {
            Debug.Log("this is a pawn taking");
            //call pawn method specific rules
            Pawn pawnScript = piece.GetComponent<Pawn>(); //insatance of pawn script
            pawnScript.pawnTakeRules(tilePos, boardScript);
        }
        else if (type == PieceType.King)
        {
            //call pawn method specific rules
            King kingScript = piece.GetComponent<King>(); //insatance of pawn script
            kingScript.KingMove(tilePos, boardScript);
        }
        else if (type == PieceType.Queen)
        {
            
        }
        else if (type == PieceType.Knight)
        {
            
        }
        else if (type == PieceType.Rook)
        {
            
        }
        else if (type == PieceType.Bishop)
        {
            
        }
    }
}
