// Para saber quem é o pai do objeto e das classes, como o typeof

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

console.log(new Cachorro instanceof Mamifero)
console.log(coiote instanceof Mamifero)
console.log(new Mamifero instanceof Cachorro)