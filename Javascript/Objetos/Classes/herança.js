// Uma classe pode herdar propriedades de outra classe por herança
// Para isso utilizamos extends

class Mamifero {
    constructor(patas) {
        this.patas = patas
    }
}

let coiote = new Mamifero(4)

console.log(coiote.patas)

class Cachorro extends Mamifero {
    constructor(patas, raca) {
        super(patas, patas); // Para alterar valores já herdados
        this.raca = raca
    }

    latir() {
        console.log("Au auu au")
    }
}

let pug = new Cachorro(4, "Pug")

console.log(pug.patas)

pug.latir()