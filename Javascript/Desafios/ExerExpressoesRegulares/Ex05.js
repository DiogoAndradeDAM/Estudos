// 

const validarNome = /^(?=.{3,16}$)[a-z0-9-_]/;

console.log(validarNome.test("matheus-123"))
console.log(validarNome.test("ma"))
console.log(validarNome.test("matheus_123aaaaaaaa"))