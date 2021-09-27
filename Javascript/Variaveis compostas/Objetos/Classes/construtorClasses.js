// Na versão ES6 foi adicionado uma opção de criação de class parecida com outras linguagens, porém é muito recente então à problemas de compatibilidade

class Cachorro {
    constructor(raca, cor) {
        this.raca = raca;
        this.cor = cor;
    }

    latir() {
        console.log("Au au")
    }
}

Cachorro.prototype.patas = 4

let labrador = new Cachorro("Labrador", "Preto");

console.log(labrador);

labrador.latir()