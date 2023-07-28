function myDigitalClock() {
  var date = new Date();
  var hours = date.getHours();
  var minutes = date.getMinutes();
  var seconds = date.getSeconds();
  var zone = "AM";

  if (hours > 12) {
    hours = hours - 12;
    zone = "PM";
  }

  if (hours == 0) {
    hours = 12;
  }

  if (hours < 10) {
    hours = "0" + hours;
  }

  if (minutes < 10) {
    minutes = "0" + minutes;
  }

  if (seconds < 10) {
    seconds = "0" + seconds;
  }

  var time = hours + ":" + minutes + ":" + seconds + " " + zone;

  document.getElementById("clock").innerHTML = time;

  console.log(time);

  setTimeout(myDigitalClock, 1000);
}

myDigitalClock();
