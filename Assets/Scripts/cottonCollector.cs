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
	public Vector2 cottonPosRandom;
	//
	public float yMin = 5.34f;
	public float yMax = 7.92f;
	public float xMin = -6.12f;
	public float xMax = -3.55f;

	public int times = 10;


	// Use this for initialization
	void Start () {

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
		
			Vector2 cottonPosRandom = new Vector2 (randomNumX, randomNumY);
		
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
