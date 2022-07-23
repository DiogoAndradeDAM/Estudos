"use strict";
const clock = document.getElementById("clock");
setInterval(() => {
    let date = new Date();
    let time = {
        hours: date.getHours().toString(),
        minutes: date.getMinutes().toString(),
        seconds: date.getSeconds().toString(),
        type: null
    };
    if (time.hours < 10)
        time.hours = "0".concat(time.hours);
    if (time.minutes < 10)
        time.minutes = "0".concat(time.minutes);
    if (time.seconds < 10)
        time.seconds = "0".concat(time.seconds);
    time.type = (time.hours < 12) ? "am" : "pm";
    clock.innerHTML = `<span id="numbers">${time.hours}|${time.minutes}|${time.seconds}<span id="tim">${time.type}</span></span>`;
});
