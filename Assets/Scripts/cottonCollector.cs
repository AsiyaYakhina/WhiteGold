using UnityEngine;
using System.Collections;

public class cottonCollector : MonoBehaviour {


	public GameObject cottonPiece1;
	public GameObject cottonPiece2;
	public GameObject cottonPiece3;
	public GameObject cottonPiece4;
	public GameObject cottonPiece5;
	public GameObject cottonPiece6;
	public GameObject cottonPiece7;
	public GameObject cottonPiece8;
	public Vector3 cottonPosRandom;
	//
	private float yMin = 5.34f;
	private float yMax = 7.92f;
	private float xMin = -6.12f;
	private float xMax = -3.55f;
	private float zVal = -20f;

	public int times = 10;

	private int scoreBoardTimer;
	private int maxTimer;

	// Use this for initialization
	void Start () {
		maxTimer = 80;
		scoreBoardTimer = maxTimer;
	}
	
	// Update is called once per frame
	void Update () {
		dropCotton ();
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

		times = times - 1;;
	
}

}
