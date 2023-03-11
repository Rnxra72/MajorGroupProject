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

    public void Rules(Vector3 tilePos)
    {
        GameObject board = GameObject.FindWithTag("BoardLayout");
        Board boardScript = board.GetComponent<Board>();
        //Debug.Log("Move regular piece");
        GameObject piece = boardScript.getCurrentPiece().gameObject;
        PieceType type = piece.GetComponent<Pieces>().ptype;

        //if statments for all piece types
        if (type == PieceType.Pawn)
        {
            Pawn pawnScript = piece.GetComponent<Pawn>(); //insatance of pawn script
            pawnScript.pawnMoveRules(tilePos, boardScript);
        }
        else if (type == PieceType.King)
        {
            //call pawn method specific rules
            King kingScript = piece.GetComponent<King>(); 
            kingScript.kingRules(tilePos, boardScript);
        }
        else if (type == PieceType.Queen)
        {
            Queen queenScript = piece.GetComponent<Queen>();
            queenScript.queenRules(tilePos, boardScript);
        }
        else if (type == PieceType.Knight)
        {
            Knight knightScript = piece.GetComponent<Knight>();
            knightScript.knightRules(tilePos, boardScript);
        }
        else if (type == PieceType.Rook)
        {
            Rook rookScript = piece.GetComponent<Rook>();
            rookScript.rookRules(tilePos, boardScript);
        }
        else if (type == PieceType.Bishop)
        {
            Bishop bishopScript = piece.GetComponent<Bishop>();
            bishopScript.bishopRules(tilePos, boardScript);
        }
    }
}
