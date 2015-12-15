using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class gameManager : MonoBehaviour {
	
//	public scoreTracker st;
	public GameObject winAnimation;
	public GameObject scoreBoard;

	public int scoreBoardCounter;

	public GameObject player;

	public Text scoreOnWin;

	private Vector3 winAnimPosition;
	private Vector3 scoreBoardPosition;

	private int winTimer;
	private int maxWinTimer;

	private int scoreBoardTimer;
	private int maxScoreBoardTimer;

	private int animationInScene;
	private int scoreboardInScene;

	public GameObject stud1;
	public GameObject stud2;
	public GameObject stud3;
	public GameObject stud4;
	public GameObject stud5;
	public GameObject stud6;
	public GameObject stud7;
	public GameObject stud8;
	public GameObject stud9;
	public GameObject stud10;
	public GameObject stud11;
	public GameObject stud12;
	public GameObject stud13;
	public GameObject stud14;
	public GameObject stud15;
	public GameObject stud16;

	public GameObject cottonPiece1;
	public GameObject cottonPiece2;
	public GameObject cottonPiece3;
	public GameObject cottonPiece4;
	public GameObject cottonPiece5;
	public GameObject cottonPiece6;
	public GameObject cottonPiece7;
	public GameObject cottonPiece8;
	private Vector3 cottonPosRandom;
	//
	private float yMin = 5.34f;
	private float yMax = 7.92f;
	private float xMin = -4.28f;
	private float xMax = 4.47f;
	private float zVal = -2.5f;
	
	private int times = 10;

	public static string stateOFTheGame = "pick"; // possible states: "pick", "win", "score"
	private GameObject pickScene;

	// Use this for initialization
	void Start () {
		scoreBoardCounter = 0;
		//print ("START gameManager");
//		st = GameObject.FindGameObjectWithTag("ScoreTracker").GetComponent<scoreTracker>();
		pickScene = GameObject.Find("pickScene"); 
		
		Vector3 winAnimPosition = new Vector3 (-0.81f, 0, -1);
		Vector3 scoreBoardPosition = new Vector3 (3.53f, -0.52f, 5f);
		maxWinTimer = 120;
		winTimer = maxWinTimer;

		maxScoreBoardTimer = 200;
		scoreBoardTimer = maxScoreBoardTimer;

		animationInScene = 0; // no animation in scene in the beginning
		scoreboardInScene = 0;

		stud1.transform.localScale = new Vector3(0, 0, 0);
		stud2.transform.localScale = new Vector3(0, 0, 0);
		stud3.transform.localScale = new Vector3(0, 0, 0);
		stud4.transform.localScale = new Vector3(0, 0, 0);
		stud5.transform.localScale = new Vector3(0, 0, 0);
		stud6.transform.localScale = new Vector3(0, 0, 0);
		stud7.transform.localScale = new Vector3(0, 0, 0);
		stud8.transform.localScale = new Vector3(0, 0, 0);
		stud9.transform.localScale = new Vector3(0, 0, 0);
		stud10.transform.localScale = new Vector3(0, 0, 0);
		stud11.transform.localScale = new Vector3(0, 0, 0);
		stud12.transform.localScale = new Vector3(0, 0, 0);
		stud13.transform.localScale = new Vector3(0, 0, 0);
		stud14.transform.localScale = new Vector3(0, 0, 0);
		stud15.transform.localScale = new Vector3(0, 0, 0);
		stud16.transform.localScale = new Vector3(0, 0, 0);
	
	}
	
	// Update is called once per frame
	void Update () {


		if (stateOFTheGame == "pick" && scoreTracker.checkIfBigPick () == 1) { 
			stateOFTheGame = "win";


		} else if (stateOFTheGame == "win") {
			pickScene.transform.position = new Vector3 (0,-17,0);
		//	player.GetComponent<followTouch> ().enabled = false;
			scoreOnWin.text = "amount :" + scoreTracker.score.ToString ();
			scoreOnWin.enabled = true;
			print ("stateOfTheGame " + stateOFTheGame);
			createWinAnimation ();
			if (winTimer == 0) {
				// set winTimer back to max
				winTimer = maxWinTimer;
				hideWinAnimation ();
				animationInScene = 0;
				stateOFTheGame = "score";
				print ("stateOfTheGame " + stateOFTheGame);
			} else {
				winTimer = winTimer - 1;
			}


		} else if (stateOFTheGame == "score") {
			pickScene.transform.position = new Vector3 (0,-17,0);
			scoreOnWin.enabled = false;
			//player.GetComponent<followTouch> ().enabled = false;
			showScoreBoard ();
			dropCotton (); 
		
			if (scoreBoardTimer == 0) {
				scoreBoardTimer = maxScoreBoardTimer;
				hideScoreBoard ();

				print ("stateOfTheGameInZero " + stateOFTheGame);
				scoreTracker.score = scoreTracker.score + 1;
				//	print (scoreTracker.checkIfBigPick().ToString());
			
				//	print ("newScore" + scoreTracker.score.ToString ());
				stateOFTheGame = "pick";
			} else {
				scoreBoardTimer = scoreBoardTimer - 1;
				print ("scoreBoardTimer "+ scoreBoardTimer);
				print ("gameState " +stateOFTheGame); 
			}
		
	} else if (stateOFTheGame == "pick") {
			pickScene.transform.position = new Vector3 (0,0,0);
			times = 10;
			player.transform.position = new Vector3 (-3.83f, 0.94f, 0f);
			scoreOnWin.enabled = false;
		//	player.GetComponent<followTouch>().enabled = true;

		}
	}

	void createWinAnimation() {
		if (animationInScene == 0) {
		//	winAnimation = Instantiate (winAnimation, winAnimPosition, transform.rotation);
			winAnimation.transform.position = new Vector3(-0.81f, -0.32f, -1.5f);
			animationInScene = 1;
		}
	}
		
	void hideWinAnimation() {
		if (animationInScene == 1) {
			winAnimation.transform.position = new Vector3(-0.81f, -0.32f, 3f);
			animationInScene = 0;
		} 
	}

	void showScoreBoard() {
		if (scoreboardInScene == 0) {
			scoreboardInScene = 1;
			scoreBoard.transform.position = new Vector3 (3.53f, -0.52f, -1.44f);
			placeKid();

		}
	}

	void hideScoreBoard() {
		if (scoreboardInScene == 1) {
			scoreBoard.transform.position = new Vector3(0, 9, 2);
			scoreboardInScene = 0;
			scoreBoardCounter= scoreBoardCounter+1;
		}
	}

	void placeKid () {
		if (scoreBoardCounter == 0) {
			stud1.transform.localScale = new Vector3 (1, 1, 1);
		} else if (scoreBoardCounter == 1) {
			stud2.transform.localScale = new Vector3 (1, 1, 1);
		} else if (scoreBoardCounter == 2) {
			stud3.transform.localScale = new Vector3 (1, 1, 1);
		} else if (scoreBoardCounter == 3) {
			stud4.transform.localScale = new Vector3 (1, 1, 1);
		} else if (scoreBoardCounter == 4) {
			stud5.transform.localScale = new Vector3 (1, 1, 1);
		} else if (scoreBoardCounter == 5) {
			stud6.transform.localScale = new Vector3 (1, 1, 1);
		} else if (scoreBoardCounter == 6) {
			stud7.transform.localScale = new Vector3 (1, 1, 1);
		} else if (scoreBoardCounter == 7) {
			stud8.transform.localScale = new Vector3 (1, 1, 1);
		} else if (scoreBoardCounter == 8) {
			stud9.transform.localScale = new Vector3 (1, 1, 1);
		} else if (scoreBoardCounter == 9) {
			stud10.transform.localScale = new Vector3 (1, 1, 1);
		} else if (scoreBoardCounter == 10) {
			stud11.transform.localScale = new Vector3 (1, 1, 1);
		} else if (scoreBoardCounter == 11) {
			stud12.transform.localScale = new Vector3 (1, 1, 1);
		} else if (scoreBoardCounter == 12) {
			stud13.transform.localScale = new Vector3 (1, 1, 1);
		} else if (scoreBoardCounter == 13) {
			stud14.transform.localScale = new Vector3 (1, 1, 1);
		} else if (scoreBoardCounter == 14) {
			stud15.transform.localScale = new Vector3 (1, 1, 1);
		} else if (scoreBoardCounter == 15) {
			stud16.transform.localScale = new Vector3 (1, 1, 1);
		}
	}


	void dropCotton () {
		if (times > 0) {
			float randomNumX = Random.Range (xMin, xMax);
			float randomNumY = Random.Range (yMin, yMax);
			//print ("randomY is "+randomNumY.ToString());
			
			Vector3 cottonPosRandom = new Vector3 (randomNumX, randomNumY, zVal);
			
			int randomNum = Random.Range (1, 9);
			
			//
			if (randomNum == 1) {
				GameObject cot = (GameObject)Instantiate (cottonPiece1, cottonPosRandom, transform.rotation);
				cot.transform.parent = GameObject.Find("scoreBoard").transform;
			} else if (randomNum == 2) {
				GameObject cot2 = (GameObject)Instantiate (cottonPiece2, cottonPosRandom, transform.rotation);
				cot2.transform.parent = GameObject.Find("scoreBoard").transform;
			} else if (randomNum == 3) {
				GameObject cot3 = (GameObject)Instantiate (cottonPiece3, cottonPosRandom, transform.rotation);
				cot3.transform.parent = GameObject.Find("scoreBoard").transform;
			} else if (randomNum == 4) {
				GameObject cot4 = (GameObject)Instantiate (cottonPiece4, cottonPosRandom, transform.rotation);
				cot4.transform.parent = GameObject.Find("scoreBoard").transform;
			} else if (randomNum == 5) {
				GameObject cot5 = (GameObject)Instantiate (cottonPiece5, cottonPosRandom, transform.rotation);
				cot5.transform.parent = GameObject.Find("scoreBoard").transform;
			} else if (randomNum == 6) {
				GameObject cot6 = (GameObject)Instantiate (cottonPiece6, cottonPosRandom, transform.rotation);
				cot6.transform.parent = GameObject.Find("scoreBoard").transform;
			} else if (randomNum == 7) {
				GameObject cot7 = (GameObject)Instantiate (cottonPiece7, cottonPosRandom, transform.rotation);
				cot7.transform.parent = GameObject.Find("scoreBoard").transform;
			} else if (randomNum == 8) {
				GameObject cot8 = (GameObject)Instantiate (cottonPiece8, cottonPosRandom, transform.rotation);
				cot8.transform.parent = GameObject.Find("scoreBoard").transform;
			}
			
		}
		
		times = times - 1;;
		
	}
}
