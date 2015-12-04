using UnityEngine;
using System.Collections;

public class scrolling : MonoBehaviour {
	
	public float speed = 10f;
	
	void Start() {
		
	}
	
	void Update() {
		int ifAlive = cottonPicker.seeIfDead ();
		if (ifAlive == 1) {
			transform.Translate (new Vector2 (-1, 0) * speed * Time.deltaTime);
		} else {
		// do nothing
		}
	}

	
}

