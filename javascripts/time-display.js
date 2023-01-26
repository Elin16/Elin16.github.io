function current_time() {
    date = new Date();
    var hour = date.getHours();
    if (hour < 10) hour = "0" + hour;
    var minute = date.getMinutes();
    if (minute < 10) minute = "0" + minute;
    var second = date.getSeconds();
    if (second < 10) second = "0" + second;
    var time = hour + ":" + minute + ":" + second;
    document.getElementById("timeDisplayer").innerHTML = time;
}
function change_picture() {
    date = new Date();
    var hour = date.getHours();
    var minute = date.getMinutes();
    if (minute%2) {
        document.getElementById("timePicture").src = "img/playing.jpeg";
    } else {
        document.getElementById("timePicture").src = "img/sleeping.jpeg";
    }
}
setInterval(change_picture, 1000 * 2);
setInterval(current_time, 1000);