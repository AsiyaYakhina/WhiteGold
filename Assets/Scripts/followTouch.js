private var pos : Vector2;

function Start () {
//Screen.sleepTimeout = SleepTimeout.NeverSleep;
}

function Update() {
MoveUpdate();
}

function MoveUpdate() {
if (Application.platform == RuntimePlatform.Android) {
pos = Camera.main.ScreenToWorldPoint(Vector2(Input.GetTouch(0).position.x, Input.GetTouch(0).position.y)); 
}

else {

pos = Camera.main.ScreenToWorldPoint(Vector2(Input.mousePosition.x, Input.mousePosition.y));
}

transform.position = new Vector2(pos.x, pos.y+1f);
}
