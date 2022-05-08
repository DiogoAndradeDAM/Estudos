setInterval(printTime, 1000);

function printTime()
{
    console.clear();
    let times = new Date();
    let hours = times.getHours();
    let minutes = times.getMinutes();
    let seconds = times.getSeconds();
    let timeType = (hours >= 12) ? "pm" : "am";
    console.log(`${hours}: ${minutes}: ${seconds} ${timeType}`);
}