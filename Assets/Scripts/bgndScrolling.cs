using UnityEngine;
using System.Collections;

public class bgndScrolling : MonoBehaviour {
	
	public float speed = 0.2f;


	void OnTriggerEnter2D(Collider2D col) {

		print ("stillCOlliding"); 
		if (col.gameObject.tag == "BgndCollider") {
			print ("REACHED THE POINT");
		}
	}


	void Update() {
		transform.Translate(new Vector2 (-1,0)*speed*Time.deltaTime);

	}


}



