let count=0;
let max = 10;

const myTimer/*Uma variável para o clearInterval()*/ = setInterval(countUp, 1000);

function countUp()
{
    count+=1;
    console.log(count);
    if(count >= max){
        clearInterval(myTimer);
    }
}