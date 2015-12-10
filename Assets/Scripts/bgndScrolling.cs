using UnityEngine;
using System.Collections;

public class bgndScrolling : MonoBehaviour {
	
	public float speed = 0.2f;
	private int ifAlive;


	void OnTriggerEnter2D(Collider2D col) {
		print ("stillCOlliding"); 
		if (col.gameObject.tag == "BgndCollider") {
			print ("REACHED THE POINT");
			transform.Translate (new Vector2 (43.73f, 0f));
		} else if (col.gameObject.tag == "Cotton") {
			print ("collidingWCotton");
			Destroy(col.gameObject);
			CottonGenerator.reduceCoutner();
		}
	}

	void Start () {
		ifAlive = 1;
	}


	void Update() {
		ifAlive = cottonPicker.seeIfDead ();
		if (ifAlive == 1) {
			transform.Translate (new Vector2 (-1, 0) * speed * Time.deltaTime);
		} else {
			//stop
		}
	}


}



