// Criador de caddastros em um site

class Cadastro {
    constructor(nome, idade, anoNascimento, genero) {
        this.nome = nome
        this.idade = idade
        this.anoNascimento = anoNascimento
        this.genero = genero
    }

    set setNome(nomeNovo) {
        this.nome = nomeNovo
    }

    set setIdade(idadeNova) {
        this.idade = idadeNova
    }

    set setAno(anoNascimentoNovo) {
        this.anoNascimento = anoNascimentoNovo
    }

    set setGenero(generoNovo) {
        this.genero = generoNovo
    }
}

let person1 = new Cadastro("Diogo", 16, 2005, "masculino")

person1.setNome = "Andrade"

console.log(person1)