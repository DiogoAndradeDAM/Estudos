//método é a propriedade das funções

let cachorro = {
    raca: "SRD",
    latir: function() {
        console.log("Au au");
    },
    rosnar: function() {
        console.log("Grrrr");
    },
    setRaca: function(raca) {
        this.raca = raca;
    },
    getRaca: function() {
        return "A raça é " + this.raca;
    }
}

cachorro.setRaca("Dobberman")
console.log(cachorro.raca)
cachorro.latir()

console.log(cachorro.getRaca())

//Métodos são usados para interagirem com os objetos, até mudando seus valores e propriedades
