using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class PawnPromotion : MonoBehaviour
{
    void Start()
    {
        XRSimpleInteractable interactableObject = GetComponent<XRSimpleInteractable>();
        interactableObject.activated.AddListener(interactableActivated);
    }

    public void interactableActivated(ActivateEventArgs args)
    {
        XRSimpleInteractable interactable = GetComponent<XRSimpleInteractable>();
        GameObject pawnProObject = interactable.gameObject;
        pawnPromotionUpdatepiece(pawnProObject);
    }
    public void pawnPromotionUpdatepiece(GameObject gameObject)
    {
        //.removePawnPromotionPieces();
        //take in the selected type they want to upgrade to
        //Debug.Log(gameObject.name);
        //call singleSpawn function and the positioning method to place a piece onto the board at that position
        Debug.Log(gameObject.name);
    }
}
