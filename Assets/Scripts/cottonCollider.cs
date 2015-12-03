using UnityEngine;
using System.Collections;

public class cottonCollider : MonoBehaviour {

	void OnTriggerEnter2D(Collider2D col) {
		if (col.gameObject.tag == "Cotton") {
			Destroy(col.gameObject);
			CottonGenerator.reduceCoutner();
}

	}
}
