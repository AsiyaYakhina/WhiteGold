using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class scoreTracker : MonoBehaviour {

	public float score;
	public Text scoreText;
	
	// Update is called once per frame
	void Update () {
		scoreText.text = score.ToString() + "g";
	}
}
