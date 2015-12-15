using UnityEngine;
using System.Collections;

public class controlEnabler : MonoBehaviour {

	private Object cottonPicker; // child

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
	if (gameManager.stateOFTheGame == "score" || gameManager.stateOFTheGame == "win") {
			transform.GetComponent<followTouch> ().enabled = false;
			GetComponent<Collider2D>().enabled = false;

			print ("turning off followTouch");

		} else if (gameManager.stateOFTheGame == "pick") {
			transform.GetComponent<followTouch> ().enabled = true;
			GetComponent<Collider2D>().enabled = true;
			print ("turning on followTouch");
		}
	}
}
