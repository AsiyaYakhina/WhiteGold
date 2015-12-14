using UnityEngine;
using System.Collections;

public class controlEnabler : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	if (gameManager.stateOFTheGame == "score" || gameManager.stateOFTheGame == "win") {
			transform.GetComponent<followTouch> ().enabled = false;

		} else if (gameManager.stateOFTheGame == "pick") {
			transform.GetComponent<followTouch> ().enabled = true;
		}
	}
}
