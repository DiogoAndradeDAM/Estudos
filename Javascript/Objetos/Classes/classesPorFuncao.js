// Serve para instanciar classes
function criaCachorro(raca, patas, cor) {
    let cachorro = Object.create({})
    cachorro.raca = raca;
    cachorro.patas = patas;
    cachorro.cor = cor;
    return cachorro;
}

let doberman = criaCachorro("Doberman", 4, "Preto")

console.log(doberman)
