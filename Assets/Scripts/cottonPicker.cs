using UnityEngine;
using System.Collections;

public class cottonPicker : MonoBehaviour {

	private scoreTracker st;
	public static int liveDie = 1; // live = 1 (default), die = 0

	void Start () {

		transform.name = "CottonPicker";
		st = GameObject.FindGameObjectWithTag("ScoreTracker").GetComponent<scoreTracker>();
	}

	void OnTriggerEnter2D(Collider2D col) {
		if (col.gameObject.tag == "Cotton") {
			CottonGenerator.reduceCoutner ();
			Destroy (col.gameObject);
			Debug.Log ("cotton picker trigger");
			int randomWeight = Random.Range(1,5);
			st.score = st.score + randomWeight* 0.25f;
			
		} else if (col.gameObject.tag == "Obstacle") {
			print ("BOOM - GONE");
			Destroy (this.gameObject);
			liveDie = 0;
			Debug.Log ("cotton picker trigger");
			
		
		} else if (col.gameObject.tag == "BgndCollider") {
			print ("COLLIDER");
	
		}
	}

	public static int seeIfDead() {
		return liveDie;
	}

}
