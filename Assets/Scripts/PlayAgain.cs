using UnityEngine;
using System.Collections;

public class PlayAgain : MonoBehaviour {

	private scoreTracker st;
	// Use this for initialization
	public void playAgain() {
		Application.LoadLevel("cottonPicking");
		//st.score = 0;
		PlayerPrefs.SetFloat ("currentScore", 0);
	}

}
