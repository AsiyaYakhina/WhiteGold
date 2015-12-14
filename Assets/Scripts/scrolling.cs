using UnityEngine;
using System.Collections;

public class scrolling : MonoBehaviour {
	
	public float speed = 10f;
	
	void Start() {
		
	}
	
	void Update() {
		int ifAlive = cottonPicker.seeIfDead ();
		if (gameManager.stateOFTheGame == "pick" && ifAlive==1) {
			transform.Translate (new Vector2 (-1, 0) * speed * Time.deltaTime);
		}
//		
//		int ifPicks = scoreTracker.IsQuotaPicked ();
//		if (ifAlive == 1 && ifPicks ==0) {
//			transform.Translate (new Vector2 (-1, 0) * speed * Time.deltaTime);
//		} else {
//		// do nothing
//		}
	}

	
}

