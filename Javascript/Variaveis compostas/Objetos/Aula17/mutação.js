let pessoa = {
    nome: "Matheus"
}

let pessoa2 = pessoa;

let pessoa3 = {
    nome: "Matheus"
}

console.log(pessoa === pessoa3)
console.log(pessoa.nome)

pessoa2.nome = "Pedro"
pessoa2.idade = 11

console.log(pessoa)

