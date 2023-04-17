using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

//class and function to display message out to user

public class TextOutToUser : MonoBehaviour
{
   [SerializeField]
    private TMP_Text txt;
    // Start is called before the first frame update
    public void ShowTextMessageToUser(string message) 
    {
        //Debug.Log(message+" hello");
        txt.GetComponent<TMPro.TextMeshProUGUI>().text = message;

        if (message != "White king in check = " || message != "black king in check = ") 
        {
            Invoke("ChangeTextToNothing", 3);
            //ChangeTextToNothing();
        }

    }

    public void ChangeTextToNothing() 
    {
        txt.GetComponent<TMPro.TextMeshProUGUI>().text = "  ";
    }
}
