let obj = {
  num: 1,
  peixes: {
    tilapia: "Tilapia",
    quantidadeTilapia: 0,
    sardinha: "Sardinha",
    quantidadeSardinha: 0
  },
  frutas: {
    maca: "Maçã",
    quantidadeMaca: 0,
    getMaca: function(fruta){return obj.fruta.quantidadeMaca}
  }
}
obj.frutas.quantidadeMaca = 10
console.log(obj.frutas.getMaca("frutas"))