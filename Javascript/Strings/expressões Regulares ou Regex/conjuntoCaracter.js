/*
 Podemos definir um conjunto de caracteres para encontrar por regex

  Basta por entr []

  Com um traço podemos definir um intervalo também
*/

const reg1 = /[12345]/

console.log(reg1.test("Temos o número 6"))
console.log(reg1.test("Temos o número 2"))
console.log(reg1.test("Temos o número 32")) // Isto é ruim

const reg2 = /[0-9]/

console.log(reg2.test("Temos o número 6"))
console.log(reg2.test("Temos o número"))
