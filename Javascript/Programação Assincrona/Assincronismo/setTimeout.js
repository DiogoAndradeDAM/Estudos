let nameItem = "Diogo";
let value = "R$500"

setTimeout(display1, 3000, nameItem, value);
console.log("1");
console.log("2");
console.log("3");
setTimeout(display2, 6000);
setTimeout(display3, 10000);
let time = setTimeout(display4, 12000);

function display1(){console.log(`${nameItem} tem o preço de ${value}`);}
function display2(){console.log("Texto2");}
function display3(){console.log("Texto3");}
function display4(){console.log("Texto4");}
clearTimeout(time);