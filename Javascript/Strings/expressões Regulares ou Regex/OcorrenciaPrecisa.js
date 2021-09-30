/*
 Inserir o número de ocorrência entre {}
*/

const cep = /\d{5}-\d{3}/; // o traço separa os caracteres

console.log(cep.test("98815-500"))
console.log(cep.test("Diogo-ola"))
console.log(cep.test("99999-999")) //Este não é um cep

const tel = /\(\d{2}\)\d{4,5}-\d{4}/;
//Parênteses são caracteres especiais

console.log(tel.test("(48)9999-9999"))
console.log(tel.test("(48)12345-1234"))