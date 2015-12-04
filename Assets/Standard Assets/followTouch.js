
private var pos : Vector2;

function Start () {
print("touchX "+pos.x.ToString() + "touchY "+pos.y.ToString());
//Screen.sleepTimeout = SleepTimeout.NeverSleep;
}

function Update() {
MoveUpdate();

}




//
//function CheckIfTouchStarts() {
//if (Application.platform == RuntimePlatform.Android) {
//if (Input.GetTouch(0).position.x == ___ && Input.GetTouch(0).position.y ==___) {
//
//
//}





function MoveUpdate() {


if (Application.platform == RuntimePlatform.Android) {
print("ANDROIDFOUND"); 
pos = Camera.main.ScreenToWorldPoint(Vector2(Input.GetTouch(0).position.x, Input.GetTouch(0).position.y)); 

print("HELLOtouchX "+pos.x.ToString() + "HELLOtouchY "+pos.y.ToString());
}

else {

pos = Camera.main.ScreenToWorldPoint(Vector2(Input.mousePosition.x, Input.mousePosition.y));
}

transform.position = new Vector2(pos.x, pos.y+1f);
}
