/* Rest Operator. Serve para a função ter inumero parâmetros. Este método transforma a função em uma lista


let num = 1;
let num2 = 5;
let num3 = 3;
let num4 = 4;

function imprimirNumeros(...args) {
    for(let i = 0; i < args.length; i++) {
        console.log(args[i]);
    }
}

imprimirNumeros(num, num2, num3, num4);
console.log("Pause")
imprimirNumeros(num2, num3);
console.log("Pause")
imprimirNumeros(2, 6, 7, 8, 9, 5);
console.log("Pause")
*/

