/*Map são vetores que contem chaves para identificar valores, as chaves podem ter qualquer tipo de dado */

let vari = new Map()//new Map(["apples", 500],["bananas", 300])
vari.set("apples", 500)//Adiciona valores ao map
vari.set("bananas", 300)
vari.get("apple")//Pega valores do map a partir da chave
vari.delete("bananas")//Deleta valores do map a partir da chave
vari.has("bananas")//Analise se existe a chave no map
vari.forEach(value => {
  console.log(value)
})
vari.entries()//Retorna um iterável com [key, value]
vari.size()//Propriedade que retorna o numeros de elementos do map