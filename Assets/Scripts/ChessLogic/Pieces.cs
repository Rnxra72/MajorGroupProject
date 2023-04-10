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

    public void Rules()
    {
        GameObject board = GameObject.FindWithTag("BoardLayout");
        Board boardScript = board.GetComponent<Board>();
        GameObject piece = boardScript.getCurrentPiece();
        PieceType type = piece.GetComponent<Pieces>().ptype;

        //if statments for all piece types
        if (type == PieceType.Pawn)
        {
            Pawn pawnScript = piece.GetComponent<Pawn>(); //insatance of pawn script
            pawnScript.pawnMoveRules(boardScript);
        }
        else if (type == PieceType.King)
        {
            //call pawn method specific rules
            King kingScript = piece.GetComponent<King>();
            kingScript.kingRules(boardScript);
        }
        else if (type == PieceType.Queen)
        {
            Queen queenScript = piece.GetComponent<Queen>();
            queenScript.queenRules(boardScript);
        }
        else if (type == PieceType.Knight)
        {
            Knight knightScript = piece.GetComponent<Knight>();
            knightScript.knightRules(boardScript);
        }
        else if (type == PieceType.Rook)
        {
            Rook rookScript = piece.GetComponent<Rook>();
            rookScript.rookRules(boardScript);
        }
        else if (type == PieceType.Bishop)
        {
            Bishop bishopScript = piece.GetComponent<Bishop>();
            bishopScript.bishopRules(boardScript);
        }
    }

    public bool positionsChecks(Vector3 temp, Board boardScript, Pieces piece)
    {
        Pieces[,] chessArray = boardScript.getChessArray();
        int x = (int)temp.x; int z = (int)temp.z;
        Pieces p = chessArray[x, z];                //get script of piece at that position in chess array

        bool pieceAtPos = boardScript.isPieceOnTile(temp);
        if (pieceAtPos)
        {
            if (piece.team != p.team)
            {
                //avaiableMoves.Add(temp);
                return true;
            }
            return false;
        }
        else
        {
            //avaiableMoves.Add(temp);
            return true;
        }
    }

    public List<Vector3> BishopMoves(Board boardScript) 
    {
        Pieces pieceScript = boardScript.getCurrentPiece().GetComponent<Pieces>();

        int x = (pieceScript.currentXPos);
        int z = (pieceScript.currentZPos);

        Vector3 temp; List<Vector3> avaiableMoves = new List<Vector3>();
        int counter = 0;
        int i = x, j = z;
        bool pieceAtPos = false, sameTeam;
        while (i < 7 && !pieceAtPos && j < 7)
        {
            i++; j++; //top left

            temp = new Vector3((float)i, 0f, (float)j);
            pieceAtPos = boardScript.isPieceOnTile(temp);
            sameTeam = pieceScript.positionsChecks(temp, boardScript, pieceScript);

            if (!pieceAtPos)
            {
                avaiableMoves.Add(temp);
            }

            else if (pieceAtPos && counter < 1 && sameTeam)
            {
                avaiableMoves.Add(temp);
                counter++;
            }

        }
        i = x; j = z;
        pieceAtPos = false; counter = 0;
        while (j > 0 && !pieceAtPos && i < 7)
        {
            j--; i++; //top right

            temp = new Vector3((float)i, 0f, (float)j);
            pieceAtPos = boardScript.isPieceOnTile(temp);
            sameTeam = pieceScript.positionsChecks(temp, boardScript, pieceScript);

            if (!pieceAtPos)
            {
                avaiableMoves.Add(temp);
            }

            else if (pieceAtPos && counter < 1 && sameTeam)
            {
                avaiableMoves.Add(temp);
                counter++;
            }
        }

        i = x; j = z;
        pieceAtPos = false; counter = 0;
        while (i > 0 && !pieceAtPos && j > 0)
        {
            j--; i--; //bottom right
            temp = new Vector3((float)i, 0f, (float)j);
            pieceAtPos = boardScript.isPieceOnTile(temp);
            sameTeam = pieceScript.positionsChecks(temp, boardScript, pieceScript);

            if (!pieceAtPos)
            {
                avaiableMoves.Add(temp);
            }

            else if (pieceAtPos && counter < 1 && sameTeam)
            {
                avaiableMoves.Add(temp);
                counter++;
            }

        }
        i = x; j = z;
        pieceAtPos = false; counter = 0;
        while (j < 7 && !pieceAtPos && i > 0)
        {
            j++; i--; //bottom right
            temp = new Vector3((float)i, 0f, (float)j);

            pieceAtPos = boardScript.isPieceOnTile(temp);
            sameTeam = pieceScript.positionsChecks(temp, boardScript, pieceScript);

            if (!pieceAtPos)
            {
                avaiableMoves.Add(temp);
            }

            else if (pieceAtPos && counter < 1 && sameTeam)
            {
                avaiableMoves.Add(temp);
                counter++;
            }
        }
        //boardScript.SetMovesAvailable(avaiableMoves);
        return avaiableMoves;
    }
    public List<Vector3> RookMoves(Board boardScript)
    {
        //Rook rookScipt = boardScript.getCurrentPiece().GetComponent<Rook>();
        Pieces pieceScript = boardScript.getCurrentPiece().GetComponent<Pieces>();

        int x = (pieceScript.currentXPos);
        int z = (pieceScript.currentZPos);
        
        Vector3 temp; List<Vector3> avaiableMoves = new List<Vector3>();
        int counter = 0;
        int i = x, j = z;
        bool pieceAtPos = false, sameTeam;
        while (i < 7 && !pieceAtPos)
        {
            i++;

            temp = new Vector3((float)i, 0f, (float)z);
            pieceAtPos = boardScript.isPieceOnTile(temp);
            sameTeam = pieceScript.positionsChecks(temp, boardScript, pieceScript);

            if (!pieceAtPos)
            {
                avaiableMoves.Add(temp);
            }

            else if (pieceAtPos && counter < 1 && sameTeam)
            {
                avaiableMoves.Add(temp);
                counter++;
            }

        }
        pieceAtPos = false; counter = 0;
        while (j < 7 && !pieceAtPos)
        {
            j++;
            temp = new Vector3((float)x, 0f, (float)j);
            pieceAtPos = boardScript.isPieceOnTile(temp);
            sameTeam = pieceScript.positionsChecks(temp, boardScript, pieceScript);

            if (!pieceAtPos)
            {
                avaiableMoves.Add(temp);
            }

            else if (pieceAtPos && counter < 1 && sameTeam)
            {
                avaiableMoves.Add(temp);
                counter++;
            }
        }

        i = x; j = z;
        pieceAtPos = false; counter = 0;
        while (i > 0 && !pieceAtPos)
        {
            i--;
            temp = new Vector3((float)i, 0f, (float)z);
            pieceAtPos = boardScript.isPieceOnTile(temp);
            sameTeam = pieceScript.positionsChecks(temp, boardScript, pieceScript);

            if (!pieceAtPos)
            {
                avaiableMoves.Add(temp);
            }

            else if (pieceAtPos && counter < 1 && sameTeam)
            {
                avaiableMoves.Add(temp);
                counter++;
            }

        }
        pieceAtPos = false; counter = 0;
        while (j > 0 && !pieceAtPos)
        {
            j--;
            temp = new Vector3((float)x, 0f, (float)j);
            pieceAtPos = boardScript.isPieceOnTile(temp);
            sameTeam = pieceScript.positionsChecks(temp, boardScript, pieceScript);

            if (!pieceAtPos)
            {
                avaiableMoves.Add(temp);
            }

            else if (pieceAtPos && counter < 1 && sameTeam)
            {
                avaiableMoves.Add(temp);
                counter++;
            }

        }
        return avaiableMoves;
    }

    public List<Vector3> decideIfMoveAdded(Vector3 temp, Board boardScript, Pieces pieceScript, int counter, List<Vector3> avaiableMoves) 
    {
        bool pieceAtPos = boardScript.isPieceOnTile(temp);
        bool   sameTeam = pieceScript.positionsChecks(temp, boardScript, pieceScript);

            if (!pieceAtPos)
            {
                avaiableMoves.Add(temp);
            }

            else if (pieceAtPos && counter < 1 && sameTeam)
            {
                avaiableMoves.Add(temp);
                counter++;
            }
        return avaiableMoves;
    }
}
