using UnityEngine;
using System.Collections;

public class cottonPicking : MonoBehaviour {

	// Use this for initialization
	void Start () {
		Debug.Log ("Hello");
	}
	
	// Update is called once per frame
	void Update () {
	
	}


	void OnCollisionEnter2D(Collision2D col) {
		Debug.Log ("Collision");
	}

	void OnTriggerEnter2D(Collision2D col) {
		Debug.Log ("Trigger");
	}

}
