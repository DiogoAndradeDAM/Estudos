// Symbols são propriedades únicas que não podem ser alteradas e nem criadas duas vezes

class Cachorro {
    constructor(raca, patas, cor) {
        this.raca = raca;
        this.cor = cor;
    }

    latir() {
        console.log("Au au");
    }
}

Cachorro.prototype.raca = "SRD";

let patas = Symbol();

Cachorro.prototype[patas] = 4

let labrador = new Cachorro("Labrador", "Amarelo")

labrador.latir()

console.log(Cachorro.prototype.raca);
console.log(labrador.raca);

// Acessando Symbol, para isso precisamos procurar no prototype
console.log(Cachorro.prototype[patas])

console.log(labrador[patas])