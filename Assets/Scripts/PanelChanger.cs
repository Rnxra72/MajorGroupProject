using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PanelChanger : MonoBehaviour
{
    public GameObject uiScreen;
    private bool isScreenVisible = true;

    // Start is called before the first frame update
    void Start()
    {
        uiScreen.SetActive(true);
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetButtonDown("Fire3")){
            isScreenVisible = !isScreenVisible;
            uiScreen.SetActive(isScreenVisible);
        }
    }
}
