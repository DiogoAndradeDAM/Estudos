// Validando um dominio

const validaDominio = /[?www.]\w+\.com.br|.com/;

// OS parenteses servem para separar o www. do resto

console.log(validaDominio.test("www.google.com"))
console.log(validaDominio.test("www.horadecodar.com.br"))
console.log(validaDominio.test("www.horadecodar"))
console.log(validaDominio.test("google.com"))
console.log()
console.log()

//Validando E-mail

const validarEmail = /\w+@\w+\.\w+/;

console.log(validarEmail.test("matheus@gmail.com"))
console.log(validarEmail.test("matheus@gmail"))
console.log(validarEmail.test("gmail.com"))
console.log(validarEmail.test("matheus@gmail.com.br"))
console.log(validarEmail.test("gmail@gmail.gmail.gmail")) // Isto é um problema
console.log()
console.log()

//Validando data de nascimento

//const validarDataNasc = /[0-9]{2}[/][0-9]{2}[/][0-9]{4}/;
const validarDataNasc = /[0-31]{2}[/][0-12]{2}[/][1920-2020]{4}/;
// No exemplo acima a o problema que a primeira que está correta é colocada com errada, retornando false

console.log(validarDataNasc.test("05/02/2000"))
console.log(validarDataNasc.test("5/2/2000"))
console.log(validarDataNasc.test("05-02-2000"))
console.log(validarDataNasc.test("99/99/0000"))
console.log(validarDataNasc.test("30/02/2000"))

