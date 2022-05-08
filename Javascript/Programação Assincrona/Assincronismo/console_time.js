console.time("Thats time:");
let count=0;
let max=10;
console.log("Time1");
const myTimer= setInterval(countUp, 1000);
console.log("Time2");

function countUp()
{
    count+=1;
    console.log(count);
    if(count >= max){
        clearInterval(myTimer);
    }
}
console.timeEnd("Thats time:");