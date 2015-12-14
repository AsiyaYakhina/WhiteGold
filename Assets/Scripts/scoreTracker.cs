using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class scoreTracker : MonoBehaviour {


	public static int score;
	public Text scoreText;
	public static int bigPickAmount;
	public static int ifPicked;


	void Awake() {
		score = 0;
		score = PlayerPrefs.GetInt("currentScore");
		bigPickAmount = 10;
		ifPicked = 0;
		//PlayerPrefs.SetFloat ("currentScore", 0);
	}

	void Start () {
	//	print ("starting score" + score.ToString ());
		ifPicked = 0;
		score = 0;
	
	}
	
	// Update is called once per frame
	void Update () {
		//print ("SCORESCORE " + score.ToString ());
		scoreText.text = score.ToString() + " g";
		PlayerPrefs.SetInt("currentScore", score); 
		checkIfBigPick ();


	}


	public static int checkIfBigPick() { // 1 = yes big pick
		if (score % bigPickAmount == 0 && score != 0) {
			//	print ("new big amount: ");
			ifPicked = 1;
		} else {
			ifPicked = 0;
		}
		return ifPicked;

	}

	public static int IsQuotaPicked() {
		return ifPicked;
	}


}
