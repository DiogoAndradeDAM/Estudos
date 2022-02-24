/*Set's são um conjuto de valores do mesmo tipo, em que valores já existente em um set, não podem ser readicionados */

let vari = new Set()//new Set(["a","b","c"])
vari.add("a")
vari.add("b")
vari.add("c")//Adiciona valores ao set
vari.delete("c")//Retira valores do set
vari.has("c")//Analisa se o valor existe no set, se existir retorna true
vari.forEach(value => {
  console.log(value+"   ")
})
vari.values()//?