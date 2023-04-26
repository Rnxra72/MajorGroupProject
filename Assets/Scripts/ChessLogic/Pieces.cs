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


    public List<Vector3> Rules(GameObject piece, int counter)
    {
        List<Vector3> avaiableMoves = new List<Vector3>();
        GameObject board = GameObject.FindWithTag("BoardLayout");
        Board boardScript = board.GetComponent<Board>();
        //GameObject piece = boardScript.getCurrentPiece();

        PieceType type = piece.GetComponent<Pieces>().ptype;

        //if statments for all piece types
        if (type == PieceType.Pawn)
        {
            Pawn pawnScript = piece.GetComponent<Pawn>(); //insatance of pawn script
            avaiableMoves = pawnScript.pawnMoveRules(boardScript, piece, counter);
        }
        else if (type == PieceType.King)
        {
            //call pawn method specific rules
            King kingScript = piece.GetComponent<King>();
            avaiableMoves = kingScript.kingRules(boardScript, piece);
        }
        else if (type == PieceType.Queen)
        {
            Queen queenScript = piece.GetComponent<Queen>();
            avaiableMoves = queenScript.queenRules(boardScript, piece, counter);
        }
        else if (type == PieceType.Knight)
        {
            Knight knightScript = piece.GetComponent<Knight>();
            avaiableMoves = knightScript.knightRules(boardScript, piece, counter);
        }
        else if (type == PieceType.Rook)
        {
            Rook rookScript = piece.GetComponent<Rook>();
            avaiableMoves = rookScript.rookRules(boardScript, piece, counter);
        }
        else if (type == PieceType.Bishop)
        {
            Bishop bishopScript = piece.GetComponent<Bishop>();
            avaiableMoves = bishopScript.bishopRules(boardScript, piece, counter);
        }
        //boardScript.SetMovesAvailable(avaiableMoves); //the moves available to the piece selected set here
        return avaiableMoves;
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
                return true;
            }
            return false;
        }
        else
        {
            return true;
        }
    }

    public List<Vector3> BishopMoves(Board boardScript, GameObject gO)
    {
        Pieces pieceScript = gO.GetComponent<Pieces>();

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
    public List<Vector3> RookMoves(Board boardScript, GameObject gO)
    {
        //Rook rookScipt = boardScript.getCurrentPiece().GetComponent<Rook>();
        Pieces pieceScript = gO.GetComponent<Pieces>();

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

    
    public List<Vector3> RemoveCheckCausingPos(Board boardScript, Pieces pieceScript, Pieces kScript, Vector3 kPos, List<Vector3> availabeMoves)
    {
        Pieces tempStorage = null;
        int x = pieceScript.currentXPos, z = pieceScript.currentZPos; //old positions
        List<Vector3> moves = new List<Vector3>();
        //int counter = 0;
        Pieces[,] p = boardScript.getChessArray();//local copy to reset real array
        for (int i = availabeMoves.Count-1; i >-1 ; i--)
        {
            Pieces pScript = pieceScript;//cerate local copy to fix details
            p = boardScript.getChessArray();
            tempStorage = null;
            p[x, z] = null;//make old pos null
            Vector3 temp = availabeMoves[i];//the array
            pScript.currentXPos = (int)temp.x; pScript.currentZPos = (int)temp.z;

            if (p[(int)temp.x, (int)temp.z] != null)
            {
                tempStorage = p[(int)temp.x, (int)temp.z];
            }

            p[(int)temp.x, (int)temp.z] = pScript;//update at checking position

            //bool causesCheck = boardScript.MoveCausesCheck(boardScript, kScript, kPos, p);
            int counter = 0;
            bool causesCheck = boardScript.IsMoveACheckPos(kPos, boardScript, kScript, counter, p);


            //reseting details
            pScript.currentZPos = z; pScript.currentXPos = x;
            p[x, z] = pieceScript;


            p[(int)temp.x, (int)temp.z] = tempStorage;

            if (causesCheck)
            {
                availabeMoves.RemoveAt(i);
            }
        }

        return availabeMoves;
    }
}