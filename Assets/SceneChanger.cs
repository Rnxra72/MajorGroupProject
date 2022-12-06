#region library 
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
#endregion

public class SceneChanger : MonoBehaviour
{
   //declaring variable for pausing the panel for gameplay screen
   public GameObject PausePanel;


   public void SceneLoad(int sceneNumber){
    
    //code to better and efficiently switch between scenes without manually inputting the scene number
    SceneManager.LoadScene(sceneNumber);
   }
   

   //code for exiting the game
   public void QuitGame() {
      Application.Quit();


      //for pausing the game
      Time.timeScale = 0;

      //for starting the game
      Time.timeScale = 1;

      //make a second canvas when pressing the pause button in the game menu, 
      //its whatever the object is, e.g Secondcanvas.SetActive = false;
   }

   
}
