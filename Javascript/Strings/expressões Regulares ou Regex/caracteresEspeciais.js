/*
\d = Qualquer dígito de numero

\w = Um caractere alfanumérico ("teste") e underline

\s = Qualquer caractere de espaço em branco

\D = Caracteres que não são digitos/números

\W = Caractere não-alfanumérico

\S = Caractere que não seja espaço e branco

. = Qualquer caractere, menos uma nova linha

\b = Procura uma palavra em uma frase dependendo da posição \bWord / Word\b //Funciona melhor em métodos como o search()

*/

const pontoRegex = /./

console.log(".")
console.log(pontoRegex.test("asd"))
console.log(pontoRegex.test(" "))
console.log(pontoRegex.test("123"))
console.log(pontoRegex.test("123sad"))
console.log()

const dRegex = /\d/ // [0-9]

console.log("\d")
console.log(dRegex.test("asd"))
console.log(dRegex.test(" "))
console.log(dRegex.test("123"))
console.log(dRegex.test("123sad"))
console.log()

const dRegex2 = /\D/ // [^0-9]

console.log("\D")
console.log(dRegex2.test("asd"))
console.log(dRegex2.test(" "))
console.log(dRegex2.test("123"))
console.log(dRegex2.test("123sad"))
console.log()

const sRegex = /\s/

console.log("\s")
console.log(sRegex.test("asd"))
console.log(sRegex.test(" "))
console.log(sRegex.test("123"))
console.log(sRegex.test("123sad"))
console.log()

const sRegex2 = /\S/

console.log("\S")
console.log(sRegex2.test("asd"))
console.log(sRegex2.test(" "))
console.log(sRegex2.test("123"))
console.log(sRegex2.test("123sad"))
console.log()

const wRegex = /\w/

console.log("\w")
console.log(wRegex.test("asd"))
console.log(wRegex.test(" "))
console.log(wRegex.test("123"))
console.log(wRegex.test("123sad"))
console.log()

const wRegex2 = /\W/

console.log("\W")
console.log(wRegex2.test("asd"))
console.log(wRegex2.test(" "))
console.log(wRegex2.test("123"))
console.log(wRegex2.test("123sad"))
console.log()

const bRegex = /\bworld/

console.log(bRegex.test("this is my world"))
console.log(bRegex.test("This is not my world"))
console.log(bRegex.test("Don't like this"))
console.log(bRegex.test("My world is wonderful"))
console.log()

const bRegex2 = /world\b/

console.log(bRegex2.test("this is my world"))
console.log(bRegex2.test("This is not my world"))
console.log(bRegex2.test("Don't like this"))
console.log(bRegex2.test("My world is wonderful"))
console.log()
