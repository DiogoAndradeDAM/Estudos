// Todos são String, se tiver eu Aviso

/* toString()
let x = 123;
console.log(x.toString());
console.log((123).toString());
console.log((100 + 23).toString());
*/

/* É como o toString(), mas o typeof da variável é number
let x = 123;
console.log(typeof x.valueOf());
console.log((123).valueOf());
console.log((100 + 23).valueOf());
*/

/* Exponenciais
let x = 9.656;
console.log(x.toExponential(2));
console.log(x.toExponential(3));
console.log(x.toExponential(4));
*/


/* Escreve os números de forma decimal
let x = 9.656;
console.log(x.toFixed(2));
console.log(x.toFixed(3));
console.log(x.toFixed(4));
*/

/* Serve para mostrar os números de forma decimal sem declarar a quantidade de casas decimais
let x = 9.656;
console.log(x.toPrecision());
console.log(x.toPrecision(2));
*/

let x = Number.NaN;
let y = Number.MAX_VALUE;
let z = Number.MIN_VALUE;
let a = Number.NEGATIVE_INFINITY;
let b = Number.POSITIVE_INFINITY;
console.log(x)