/*
As promises são ações assíncronas que podem produzir um valor em algum momento no código

Uma forma de dizer a linguagem que um valor pode estar presente em um futuro do código

O objeto das promises é "Promise", "resolve" é o método que resolve uma Promise, o "then" é p que faz ela poder ser executada em um ponto futuro
*/

let p = Promise.resolve(5)

console.log("Outros códigos")

console.log(p)

p.then((value) => {return value + 5})
 .then((value) => {console.log(`O valor é ${value}`)})




