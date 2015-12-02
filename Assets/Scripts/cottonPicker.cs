using UnityEngine;
using System.Collections;

public class cottonPicker : MonoBehaviour {
	void OnCollisionEnter2D(Collision2D col) {

	//	if (col.gameObject.tag == "Cotton") {
		//	Destroy (gameObject);
		//	print ("colliding");
	//}
}

	void OnTriggerEnter2D(Collider2D col) {
		if (col.gameObject.tag =="Cotton") {
			CottonGenerator.reduceCoutner();
			Destroy (col.gameObject);
			Debug.Log("cotton picker trigger");
			
		}
	}
}
