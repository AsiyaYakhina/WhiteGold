using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class scoreTransferer : MonoBehaviour {
	

	public Text currentScoreText;
	private float currentScore;

	// Use this for initialization
	void Start () {
		currentScore = PlayerPrefs.GetFloat("currentScore");
		//print(currentScore.ToString);
		currentScoreText.text = "score: "+currentScore.ToString();

	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
