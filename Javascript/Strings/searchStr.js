/* Serve para achar palavras na sua string
let txt = 'Olá, Mundo!';
let txt2 = txt.indexOf('Mundo'); Procura apartir do final
let txt3 = txt.lastIndexOf('mundo, 2'); Procura apartir do começo
console.log(txt2);
console.log(txt3);
*/

/* Achar palavras no começo e no fim da string
let txt = 'Diogo Andrade'
let txt2 = txt.startsWith('Diogo')//retorna um valor boolean relativo ao parâmetro recebido se está no começo da string
let txt3 = txt.endsWith('Andrade')//retorna um valor boolean relatiov ao parâmetro recebido se está no começo da string
let txt4 = txt.endsWith('Diogo, 12')
console.log(txt2)
console.log(txt3)
console.log(txt4)
*/

/* analisa se tem a palavra na string

let string = "Onde está Pompeu"
console.log(string.includes("Pompeu"))

*/

/*
let txt = 'Diogo Andrade'
console.log(txt.search("Andrade"))//A diferença entre o search do indexOf é que o search suporta strings poderosas como expressões regulares
*/

/*
let txt = "No pain, no GAIN bro!"
console.log(txt.match(/ain/))//procura na string o valor expecificado na expressão regular que recebe como parâmetro
*/

/*
let txt = "Diogo Andrade"
console.log(txt.includes("Moura"))//Analise se o valor em seu parâmetro existe na string e retorna um valor boolean
*/