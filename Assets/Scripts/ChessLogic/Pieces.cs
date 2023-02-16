using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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

    //public Vector3 desiredPos;
    //public Vector3 desiredScale;
}
