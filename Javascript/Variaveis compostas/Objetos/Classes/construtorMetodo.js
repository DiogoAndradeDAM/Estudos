function Cachorro(raca, patas, cor) {
    this.raca = raca;
    this.patas = patas;
    this.cor = cor;
}

Cachorro.prototype.uivar = function() {
    console.log("Auuuuuuu");
}

let husky = new Cachorro("Husky", 4, "cinza")

husky.uivar();