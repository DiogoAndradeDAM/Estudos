/*
 Faz com que o dígito anteior seja opcional
*/

const padrao = /abacax?i/;

console.log(padrao.test("abacaxi"))
console.log(padrao.test("abacai"))
console.log(padrao.test("abacaxxi"))

const padrao2 = /\d+\w?/;

console.log(padrao2.test("123"))
console.log(padrao2.test("123a "))

//Existe o * que procurará uma ocorrencia de zero ou mais do número anterior /dio*go/