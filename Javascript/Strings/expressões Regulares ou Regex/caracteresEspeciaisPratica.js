let ano = /\d\d\d\d/;
console.log(ano.test("05"))
console.log(ano.test("2019") && "2019".length == 4)
console.log(ano.test("opa"))
console.log(ano.test("20001") && "20001".length == 4)
console.log(ano.test("20002"))


console.log()
let palavraTresLetras = /\w\w\w/;
console.log(palavraTresLetras.test("dia"))
console.log(palavraTresLetras.test("ano") && "ano".length == 3)
console.log(palavraTresLetras.test("oi"))
console.log(palavraTresLetras.test("teste") && "teste".length == 3)
console.log(palavraTresLetras.test("teste"))