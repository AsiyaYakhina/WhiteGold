using UnityEngine;
using System.Collections;

public class cottonPicker : MonoBehaviour {

	public scoreTracker st;
	public static int liveDie; // live = 1 (default), die = 0
	

	void Start () {
		liveDie = 1;
		transform.name = "CottonPicker";

	}
	 void Update () {
		//destroyPlayer ();
	}


	void OnTriggerEnter2D(Collider2D col) {
		if (col.gameObject.tag == "Cotton") {
			CottonGenerator.reduceCoutner ();
			Destroy (col.gameObject);
			//Debug.Log ("cotton picker trigger");
			scoreTracker.score = scoreTracker.score + 1;
			
		} else if (col.gameObject.tag == "Obstacle") {
			print ("BOOM - GONE");
			Destroy (this.gameObject);
			liveDie = 0;
			Application.LoadLevel("replay");
			//Debug.Log ("cotton picker trigger");
			
		
		} else if (col.gameObject.tag == "BgndCollider") {
		//	print ("COLLIDER");
	
		}
	}


	

	public static int seeIfDead() {
		return liveDie;
	}
	

	public static void replay() {
		Application.LoadLevel("cottonPicking"); 
	}

//	public void destroyPlayer() {
//		int ifPicks = scoreTracker.IsQuotaPicked ();
//		if (ifPicks == 1) {
//			Destroy(transform.gameObject);
//		}
//
//	}

}

















