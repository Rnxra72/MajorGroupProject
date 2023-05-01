using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using Photon.Pun;
using UnityEngine.XR.Interaction.Toolkit;
public class NetworkPlayer : MonoBehaviour
{
    public Transform head;
    public Transform lefthand;
    public Transform righthand;
    private PhotonView photonView;

    private Transform headRig;
    private Transform leftHandRig;
    private Transform rightHandRig;

    void Start()
    {

        photonView = GetComponent<PhotonView>();
        XRRig rig = FindObjectOfType<XRRig>();
        headRig = rig.transform.Find("Camera Offset/Main Camera");
        leftHandRig = rig.transform.Find("Camera Offset/LeftHand Controller");
        rightHandRig = rig.transform.Find("Camera Offset/RightHand Controller");
    }
    void Update()
    {
        if (photonView.IsMine)
        {
            righthand.gameObject.SetActive(false);
            lefthand.gameObject.SetActive(false);
            head.gameObject.SetActive(false);
            MapPosition(head, headRig);
            MapPosition(lefthand, leftHandRig);
            MapPosition(righthand, rightHandRig);
        }

    }

    void MapPosition(Transform target, Transform rigTransform)
    {

        target.position = rigTransform.position;
        target.rotation = rigTransform.rotation;
    }
}

