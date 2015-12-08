using UnityEngine;
using System.Collections;

public class CottonGenerator : MonoBehaviour {


	public GameObject cottonPiece1;
	public GameObject cottonPiece2;
	public GameObject cottonPiece3;
	public GameObject cottonPiece4;
	public GameObject cottonPiece5;
	public GameObject cottonPiece6;
	public GameObject cottonPiece7;
	public GameObject cottonPiece8;
	public Vector2 cottonPosRandom;
//
	public float yMin = -2.89f;
	public float yMax = 2.89f;




	public int timer; //based on level
	private int maxTimer;
	public static int visibleCounter = 0; //current # of cottons visible
	private int maxCounter; //Maximum # of cottons allowed

	public static void reduceCoutner(){
		visibleCounter = visibleCounter - 1;
	}
	// Use this for initialization
	void Start () {

		// based on level adjust "timer" and "maxCounter"
		maxTimer = 3;
		timer = maxTimer;
		visibleCounter = 0;
		maxCounter = 50;
	}
	
	// Update is called once per frame
	void Update () {
		//print ("timer = " + timer.ToString ());
	//	print ("visibleCounter = " + visibleCounter.ToString ());

		 if (timer == 0) {  //time to put a cotton there
			timer = maxTimer;
			if (visibleCounter < maxCounter) {
				createRandomCotton();
				visibleCounter = visibleCounter + 1;
			//	print ("Created one! (hopefully)");
			}
		} else {
			timer = timer - 1;
		}
	}



	void createRandomCotton () {
		float randomNumY = Random.Range(-2.7f, 2.7f);
		//print ("randomY is "+randomNumY.ToString());

		Vector2 cottonPosRandom = new Vector2 (transform.position.x, randomNumY);

		int randomNum = Random.Range (1,9);

//
		if (randomNum == 1) {
		Instantiate (cottonPiece1, cottonPosRandom, transform.rotation);
		} else if (randomNum == 2) {
			Instantiate (cottonPiece2, cottonPosRandom, transform.rotation);
		} else if (randomNum == 3) {
			Instantiate (cottonPiece3, cottonPosRandom, transform.rotation);
		} else if (randomNum == 4) {
			Instantiate (cottonPiece4, cottonPosRandom, transform.rotation);
		} else if (randomNum == 5) {
			Instantiate (cottonPiece5, cottonPosRandom, transform.rotation);
		} else if (randomNum == 6) {
			Instantiate (cottonPiece6, cottonPosRandom, transform.rotation);
		} else if (randomNum == 7) {
			Instantiate (cottonPiece7, cottonPosRandom, transform.rotation);
		} else if (randomNum == 8) {
			Instantiate (cottonPiece8, cottonPosRandom, transform.rotation);
		}

	}
}