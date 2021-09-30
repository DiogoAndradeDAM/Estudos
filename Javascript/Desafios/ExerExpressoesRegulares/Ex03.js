// Criando um regex que só aceita certos valores

const validarMarca = /Marca: (Nike|Adidas|Puma|Asics)/;

console.log(validarMarca.test("Marca: Nike"))