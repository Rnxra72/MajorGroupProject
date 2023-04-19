using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class door : MonoBehaviour
{

    public string LevelName;
    //public int LevelIndex





    void OnTriggerEnter()
    {
        SceneManager.LoadScene(LevelName);

    }

}

