using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class scoreTracker : MonoBehaviour {

	public float score;
	public Text finalScoreText;
	public Text scoreText;

	void Start () {
		finalScoreText.text = "Collected amount";
	}
	
	// Update is called once per frame
	void Update () {
		scoreText.text = score.ToString() + " g";
		finalScoreText.text = "Collected amount: " + score.ToString() +" g";
	}
}
