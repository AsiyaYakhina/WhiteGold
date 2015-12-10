using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class scoreTracker : MonoBehaviour {


	public float score;
	public Text scoreText;

	void Awake() {
		score = 0;
	}

	void Start () {
		score = PlayerPrefs.GetFloat("currentScore");
	}
	
	// Update is called once per frame
	void Update () {
		scoreText.text = score.ToString() + " g";
		PlayerPrefs.SetFloat("currentScore", score); 

	}
}
