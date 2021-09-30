/*
 O método exec nos retorna um objeto com algumas informações sobre regex

 Se nada for encontrado, retorna null
*/

const digitos = /\d+/;

console.log(digitos.exec("Tem o número 100 aqui, Que passa altas fitas de mais de 8000 de poder"))
console.log()
console.log(digitos.exec("Tem o número aqui"))