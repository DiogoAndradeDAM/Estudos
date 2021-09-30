/* Criando um expressão regular
 Em JS são um tipo de objeto

 Podemos instancia-lo de duas formas
 New RegExp ou /.../
*/

let reg1 = new RegExp("test")
let reg2 = /test/

/* Verificando padrões com regex

 Utilizamos o método test() para verificar se o padrão é retornado

 Com isso vamos receber de resposta true ou false
*/

console.log(/testando/.test("ttttestandooooo"))
// O teste consegue encontrar "testando" em meio de várias letras
// isso acontece pq ele ignora repetição exagerada de letras

console.log(/testando/.test("asdtrshbfsed"))
// Não existe "testando" no test, então é retornado o valor false

console.log(reg1.test("Tem test?"))
console.log(reg1.test("Não tem tes t"))
