using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class next : MonoBehaviour
{

    public void onCollisionEnter(Collision gameObjectInformation)
    {
        if (gameObjectInformation.gameObject.name == "XR Origin")
        {
            Debug.Log("out of bounds");
            SceneManager.LoadScene("ChessScene");
        }
    }
}
