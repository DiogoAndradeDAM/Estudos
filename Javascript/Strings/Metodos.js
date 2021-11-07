/* Manipulando Strings
let texto = '    A verdade será dita Pompeu'
texto = texto.trim()
texto = texto.replace('verdade', 'palavra')
console.log(texto.slice(2, 9))
console.log(texto.substr(2, 7))
*/


/* Concatenação
let txt = 'Hello ';
let txt2 = 'World';
let txt3 = txt.concat(txt2)
console.log(txt3)
*/


/* Strings que parece muito matemática
let txt = '5';
console.log(txt.padEnd(4,'a'))
console.log(txt.padStart(4, 0))
*/


/*
let txt = 'A verdade será dita Adão'
console.log(txt.slice(2, 9)[6])
*/

/* Removedor
let txt = "1, 2, 3"
let myArray = txt.split(",")
console.log(myArray[1])
*/

/* join() É como o split(), mas ao contrário

let frase = "Testando o método split";
let palavras = frase.split(" ");
let novaFrase = palavras.join("")
console.log(novaFrase)
*/

/* repeat(5) repetira a string de acordo com o parâmetro

let palavra = "Olá, Mundo!";
console.log(palavra.repeat(2))
*/

/* Caixa alta e baixa
let string = "Ola"
console.log(string.toLowerCase())

console.log(string.toUpperCase())
*/