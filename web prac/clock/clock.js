function updateclock() {
    let currenttime = new Date();
    let currenthour = currenttime.getHours();
    let currentminutes = currenttime.getMinutes();
    let currentsec = currenttime.getSeconds();

    let timeofday = (currenthour < 12) ? "AM" : "PM";
    currenthour = (currenthour > 12) ? currenthour - 12 : currenthour;
    currenthour = (currenthour == 0) ? 12 : currenthour;

    currenthour = (currenthour < 10) ? "0" + currenthour : currenthour;
    currentminutes = (currentminutes < 10) ? "0" + currentminutes : currentminutes;
    currentsec = (currentsec < 10) ? "0" + currentsec : currentsec;

    let currentTimeStr = currenthour + ":" + currentminutes + ":" + currentsec + " " + timeofday;

    document.getElementById("clock").innerHTML = currentTimeStr;

}