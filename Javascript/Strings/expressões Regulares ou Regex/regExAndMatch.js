/*

 Quando trabalhamos com os metodos de search das string existe o método search() e replace() que utilizam RegEx como valor de entrada
 E é possível observar que no final da expressão as vezes à uma letra, estas letras estão dizendo como funionará a
 procura das string veja:

 g: Encontra todos os valores que correspondem ao valor do search()
 i: retira o case-sensitive do search()
 m: Encontra valores em múltiplas linhas

*/

let texto = "O sujo falando do Sujo"
console.log(texto.search(/sujo/i))

texto = "O sujo falando do sujo"
console.log(texto.search(/sujo/g))

texto = "/nO sujo /nfalando do Sujo"
console.log(texto.search(/falando/m))