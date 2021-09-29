// Prototypes são objetos dos objetos. Prototype é o pai.
// Caso o objeto filho não tenha uma propriedade, este é buscado no prototypes

const pessoa = {
    maos: 2
}

console.log(Object.getPrototypeOf(pessoa));
console.log(Object.getPrototypeOf(pessoa) == Object.prototype);

console.log(pessoa.hasOwnProperty("maos")) // para saber se tem o metodo
const pessoaNova = Object.create(pessoa); //Cria um filho de pessoa

console.log(pessoaNova.maos)
console.log(pessoaNova.hasOwnProperty("maos"))

console.log(Object.getPrototypeOf(pessoaNova) === pessoa);