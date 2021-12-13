/*
Criar um programa que mostre o lucro de determinadas categorais separadamente e soma do lucro de todas as categorias.

As categorias são as seguintes:
-Verduras
-Frutas
-Animal
-Peixes

Cada um terá 4 itens que terão seu valor. Podera se por uma quantidade ilimitada de itens, mas ao final deverá mostrar o valor das categorias e da soma delas

Só se poderá colocar itens ao dia e ver o valor dos itens a noite
*/

/*
Verduras:
-Batata
-Alface
-Couve
-Milho

Frutas:
-Maçã
-Uva
-Limão
-Banana

Animal:
-Leite
-Queijo
-Filé
-Ovo

Peixes:
-Tilápia
-Sardinha
-Atum
-Carpa
*/

class itensVendidos{
  constructor(horario){
  this.dia = horario
  this.quantidadeAlface, this.quantidadeBatata, this.quantidadeCouve, this.quantidadeMilho = 0
  this.quantidadeBanana, this.quantidadeLimao, this.quantidadeMaca, this.quantidadeUva = 0
  this.quantidadeFile, this.quantidadeOvo, this.quantidadeQueijo, this.quantidadeLeite = 0
  this.quantidadeAtum, this.quantidadeCarpa, this.quantidadeSardinha, this.quantidadeTilapia = 0
  }

  //Interface
  verdurasLucro(){

  }

  frutasLucro(){

  }

  animalLucro(){

  }

  peixesLucro(){

  }

  lucroTotal(){

  }
  //Interface Fim

  //Metodos get e set

  //Verduras
  getVerduras(verdura){
    if (this.dia === true){
      let verdura2 = verdura[0].toLowerCase()
      if (verdura2 == "b"){
        return this.quantidadeBatata
      } else if (verdura2 = "a"){
        return this.quantidadeAlface
      } else if (verdura2 = "c"){
        return this.quantidadeCouve
      } else if (verdura2 = "m"){
        return this.quantidadeMilho
      }
    } else {
      return "Não esta de dia para colocar itens"
    }
  }

  setVerduras(verdura, quant){
    let quantidade = Number(quant)
    let verdura2 = verdura[0].toLowerCase()
    if (verdura2 == "b"){
      this.quantidadeBatata += quantidade
    } else if (verdura2 = "a"){
      this.quantidadeAlface += quantidade
    } else if (verdura2 = "c"){
      this.quantidadeCouve += quantidade
    } else if (verdura2 = "m"){
      this.quantidadeMilho += quantidade
    }
  }


  //Frutas
  getFrutas(fruta){
    let fruta2 = fruta[0].toLowerCase()
    if (fruta2 == "m"){
      return this.quantidadeMaca
    } else if (fruta2 = "u"){
      return this.quantidadeUva
    } else if (fruta2 = "l"){
      return this.quantidadeLimao
    } else if (fruta2 = "b"){
      return this.quantidadeBanana
    }
  }

  setFrutas(fruta, quantidade){

    let fruta2 = fruta[0].toLowerCase()
    if (fruta2 == "m"){
      this.quantidadeMaca += quantidade
    } else if (fruta2 = "u"){
      this.quantidadeUva += quantidade
    } else if (fruta2 = "l"){
      this.quantidadeLimao += quantidade
    } else if (fruta2 = "b"){
      this.quantidadeBanana += quantidade
    }
  }


  //Animal
  getAnimal(animal){
    let animal2 = animal[0].toLowerCase()
    if (animal2 == "q"){
      return this.quantidadeQueijo
    } else if (animal2 = "l"){
      return this.quantidadeLeite
    } else if (animal2 = "f"){
      return this.quantidadeFile
    } else if (animal2 = "o"){
      return this.quantidadeOvo
    }
  }

  setAnimal(produto, quantidade){
    let animal2 = animal[0].toLowerCase()
    if (animal2 == "q"){
      this.quantidadeQueijo += quantidade
    } else if (animal2 = "l"){
      this.quantidadeLeite += quantidade
    } else if (animal2 = "f"){
      this.quantidadeFile += quantidade
    } else if (animal2 = "o"){
      this.quantidadeOvo += quantidade
    }
  }


  //Peixes
  getPeixes(peixe){
    let peixe2 = peixe[0].toLowerCase()
    if (peixe2 == "t"){
      return this.quantidadeTilapia
    } else if (peixe2 = "s"){
      return this.quantidadeSardinha
    } else if (peixe2 = "a"){
      return this.quantidadeAtum
    } else if (peixe2 = "c"){
      return this.quantidadeCarpa
    }
  }

  setPeixes(peixe, quantidade){
    let peixe2 = peixe[0].toLowerCase()
    if (peixe2 == "t"){
      this.quantidadeTilapia += quantidade
    } else if (peixe2 = "s"){
      this.quantidadeSardinha += quantidade
    } else if (peixe2 = "a"){
      this.quantidadeAtum += quantidade
    } else if (peixe2 = "c"){
      this.quantidadeCarpa += quantidade
    }
  }
}

let mercado = new itensVendidos(true)
console.log(mercado.setVerduras("Batata", 2))
console.log(mercado.getVerduras("Batata"))
