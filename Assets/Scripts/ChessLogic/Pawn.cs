using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pawn : Pieces
{
    bool movedFromStartPos;
    [SerializeField] private GameObject[] pawnProOptions;

    // Start is called before the first frame update
    void Start()
    {
        movedFromStartPos = false;
        pieceWorth = 1;
    }

    /* public void pawnMoveRules(Vector3 tilePos, Board boardScript)
     {
         Pieces pieceScript = boardScript.getCurrentPiece().GetComponent<Pieces>();
         //int forward = (pieceScript.currentZPos + 1), forward2 = (pieceScript.currentZPos + 2);

         //pawn promotion check
         if (pieceScript.team == 1 && tilePos.z == 7 || pieceScript.team == 0 && tilePos.z == 0)
         {
             pawnPromotion(boardScript);
         }

         //white pieces moves are 1, black pieces moves are 0. [1, 0] single move forward white..
         int[,] positions ={ { (pieceScript.currentZPos - 1), (pieceScript.currentZPos - 2) }, { (pieceScript.currentZPos + 1), (pieceScript.currentZPos + 2) } };

         //Debug.Log("this here" + positions[pieceScript.team, 0]);
         if (!movedFromStartPos)
         {
             for (int i=0; i<2; i++) 
             {
                 if (tilePos.z == positions[pieceScript.team, i] && tilePos.x == pieceScript.currentXPos) 
                 {
                     boardScript.setCurrentMoveValid(true);
                     movedFromStartPos = true;
                 }
             }
         }
         else if (tilePos.z == positions[pieceScript.team, 0] && tilePos.x == pieceScript.currentXPos)
         {
             boardScript.setCurrentMoveValid(true);
             movedFromStartPos = true;
         }
         else {
             boardScript.setCurrentMoveValid(false);
         }
     }*/

    /*public void pawnTakeRules(Vector3 tilePos) 
    {
        GameObject board = GameObject.FindWithTag("BoardLayout");
        Board boardScript = board.GetComponent<Board>();

        Pieces pieceScript = boardScript.getCurrentPiece().GetComponent<Pieces>();
        //pawn promotion check
        if (pieceScript.team == 1 && tilePos.z == 7 || pieceScript.team == 0 && tilePos.z == 0)
        {
            pawnPromotion(boardScript);
        }
        int right = (pieceScript.currentXPos + 1), left = (pieceScript.currentXPos - 1);
        
        int[] offset = { (pieceScript.currentZPos -1), (pieceScript.currentZPos + 1) };//black0, white1

        if (tilePos.x == right && tilePos.z == offset[pieceScript.team])
        {
            boardScript.setCurrentMoveValid(true);
            movedFromStartPos = true;
        }
        else if (tilePos.x == left && tilePos.z == offset[pieceScript.team])
        {
            boardScript.setCurrentMoveValid(true);
            movedFromStartPos = true;
        }
        else 
        {
            boardScript.setCurrentMoveValid(false);
        }
    }

    //handles pawn promotion
    public void pawnPromotion(Board boardScript)
    {

        for (int i = 0; i < 4; i++)
        {
            //instantiate all pieces in array at array positions
            //pawnProOptions[i] = Instantiate(pawnProOptions[i], new Vector3(8, 0 , i+3));
            Instantiate(pawnProOptions[i], new Vector3(-1, 0, i + 3), Quaternion.identity);

        }
    }
    public void removePawnPromotionPieces()
    {
        for (int i = 0; i < 4; i++)
        {
            //instantiate all pieces in array at array positions
            //pawnProOptions[i] = Instantiate(pawnProOptions[i], new Vector3(8, 0 , i+3));
            Destroy(pawnProOptions[i]);
        }
    }*/

    public void pawnMoveRules(Board boardScript)
    {
        Pieces pieceScript = boardScript.getCurrentPiece().GetComponent<Pieces>();
        //int forward = (pieceScript.currentZPos + 1), forward2 = (pieceScript.currentZPos + 2);

        //white pieces moves are 1, black pieces moves are 0. [1, 0] single move forward white..
        int[,] positions = { { (pieceScript.currentZPos - 1), (pieceScript.currentZPos - 2) }, { (pieceScript.currentZPos + 1), (pieceScript.currentZPos + 2) } };
        List<Vector3> avaiableMoves = new List<Vector3>();
        //if piece at position
        Vector3 temp;
        bool check = false;

        if (pieceScript.team == 1 && pieceScript.currentZPos < 7 || pieceScript.team == 0 && pieceScript.currentZPos > 0)
        {
            Debug.Log("this piece here");
            //white piece team
            if (pieceScript.team == 1)
            {
                temp = new Vector3((float)pieceScript.currentXPos, 0f, (float)pieceScript.currentZPos + 1);
                check = positionsChecks(temp, boardScript, pieceScript);
                if (check)
                    avaiableMoves.Add(temp);

                if (pieceScript.currentXPos > 7)
                {
                    int zPos = pieceScript.currentZPos + 1;
                    avaiableMoves =  TakeChecksMinus(avaiableMoves, pieceScript, zPos, boardScript);
                }
                if (pieceScript.currentXPos < 0)
                {
                    int zPos = pieceScript.currentZPos + 1;
                    avaiableMoves = TakeChecksAdding(avaiableMoves, pieceScript, zPos, boardScript);
                }
            }

            //black piece team
            else
            {
                temp = new Vector3((float)pieceScript.currentXPos, 0f, (float)pieceScript.currentZPos - 1);
                check = positionsChecks(temp, boardScript, pieceScript);
                if (check)
                    avaiableMoves.Add(temp);

                if (pieceScript.currentXPos > 7)
                {
                    int zPos = pieceScript.currentZPos - 1;
                    avaiableMoves = TakeChecksMinus(avaiableMoves, pieceScript, zPos, boardScript);
                    Debug.Log("idk here");
                }
                if (pieceScript.currentXPos < 0)
                {
                    int zPos = pieceScript.currentZPos - 1;
                    avaiableMoves = TakeChecksAdding(avaiableMoves, pieceScript, zPos, boardScript);
                }
            }

            if (!movedFromStartPos)
            {
                if (pieceScript.team == 0 && pieceScript.currentZPos > 1 || pieceScript.team == 1 && pieceScript.currentZPos < 6)
                {
                    if (pieceScript.team == 1)
                    {
                        temp = new Vector3((float)pieceScript.currentXPos, 0f, (float)pieceScript.currentZPos + 2);
                        check = positionsChecks(temp, boardScript, pieceScript);
                        if (check)
                            avaiableMoves.Add(temp);
                    }

                    else
                    {
                        temp = new Vector3((float)pieceScript.currentXPos, 0f, (float)pieceScript.currentZPos - 2);
                        check = positionsChecks(temp, boardScript, pieceScript);
                        if (check)
                            avaiableMoves.Add(temp);

                    }
                }
            }
        }
        Debug.Log("checking here, Pawn adding Moves");
        boardScript.SetMovesAvailable(avaiableMoves);
    }
    public List<Vector3> TakeChecksMinus(List<Vector3> movesList, Pieces pieceScript, int zPos, Board boardScript) 
    {
        Vector3 temp;
        temp = new Vector3((float)pieceScript.currentXPos - 1, 0f, (float)zPos);
        bool tileAtPos = boardScript.isPieceOnTile(temp);
        if (tileAtPos)
        {
            movesList.Add(temp);
        }
        return movesList;
    }
    public List<Vector3> TakeChecksAdding(List<Vector3> movesList, Pieces pieceScript, int zPos, Board boardScript)
    {
        Vector3 temp;
        temp = new Vector3((float)pieceScript.currentXPos+1, 0f, (float)zPos);
        bool tileAtPos = boardScript.isPieceOnTile(temp);
        if (tileAtPos) 
        {
            movesList.Add(temp);
        }
        return movesList;
    }
}
