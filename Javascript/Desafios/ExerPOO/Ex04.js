//Criação de carros com movimento e consumo de gasolina

class CarroMolde {
    constructor(marca, cor, gasolina) {
        this.marca = marca;
        this.cor = cor;
        this.gasolina = gasolina;
    }

    set dirigir(km) {
        let gasolinaGasta = km / 10
        this.gasolina -= gasolinaGasta;
    }

    set abastecer(gasolinaColocada) {
        this.gasolina += gasolinaColocada;
    }
}
CarroMolde.prototype.marca = "Indefinida"
CarroMolde.prototype.cor = "indefinida"
CarroMolde.prototype.gasolina = 0

let camaro = new CarroMolde("Camaro", "amarelo", 10)

console.log(camaro)

camaro.dirigir = 78
console.log("Dirigi 78Km")

console.log(camaro.gasolina)

camaro.abastecer = 10
console.log("Foi colocado 10L de gasolina")

console.log(camaro.gasolina)
