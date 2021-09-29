// é um método muito utilizado para istanciar classes

function Cachorro(raca, patas, cor) {
    this.raca = raca;
    this.patas = patas;
    this.cor = cor;
    this.uivar = function() {
        console.log("Auuuuuu");
    }
}

let husky = new Cachorro("Husky", 4, "cinza")

husky.uivar();