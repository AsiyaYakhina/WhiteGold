using UnityEngine;
using System.Collections;

public class rotation : MonoBehaviour {

	// Use this for initialization
	void Start () {
		print("startRotation " +transform.rotation.z.ToString());
	}
	
	// Update is called once per frame
	void Update () {
		transform.Rotate(new Vector3 (0,0,-1) * 100*Time.deltaTime);
		print(transform.rotation.z.ToString());
	}
}
