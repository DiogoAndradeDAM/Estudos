// Get: Serve para resgatar o valor de uma propriedade
// Set: Serve para alterar o valor de uma propriedade

class Cachorro {
    constructor(raca, cor) {
        this.raca = raca
        this._cor = cor
    }

    latir() {
        console.log("Au au")
    }
    
    get cor() {
        return this._cor
    }

    set cor(cor) {
        this._cor = cor
    }

}

let pastor = new Cachorro("Pastor Alemão", "Sem cor")

console.log(pastor)

pastor.cor = "Marrom"

console.log(pastor.cor)