/*
 Podemos colocar uma instrução na regex que funciona coo um || (or) das condiocionais
*/

const reg = /\w+: (Matheus|João|Maria)/; // Nome: nasdiafji

console.log(reg.test("Nome: Matheus"))
console.log(reg.test("Nome: José"))
console.log(reg.test("Nomes: Maria"))

