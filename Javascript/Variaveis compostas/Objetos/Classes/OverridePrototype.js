// Serve para criar uma padronização nas propriedades

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
Cachorro.prototype.patas = 4;

let labrador = new Cachorro("Labrador", "Amarelo")

console.log(labrador.patas)

labrador.latir()

console.log(Cachorro.prototype.raca);
console.log(labrador.raca);