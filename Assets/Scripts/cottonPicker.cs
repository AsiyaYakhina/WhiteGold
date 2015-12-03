using UnityEngine;
using System.Collections;

public class cottonPicker : MonoBehaviour {


	void Start () {

		transform.name = "CottonPicker";
	}

	void OnTriggerEnter2D(Collider2D col) {
		if (col.gameObject.tag == "Cotton") {
			CottonGenerator.reduceCoutner ();
			Destroy (col.gameObject);
			Debug.Log ("cotton picker trigger");
			
		} else if (col.gameObject.tag == "Obstacle") {
			print ("BOOM - GONE");
			Destroy (this.gameObject);
			Debug.Log ("cotton picker trigger");
			
		
		} else if (col.gameObject.tag == "BgndCollider") {
			print ("COLLIDER");
	
	}
	
}
}
