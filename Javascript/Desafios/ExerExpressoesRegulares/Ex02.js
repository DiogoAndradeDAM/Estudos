//Criando regex que só aceita strings termiandas com ID

const validarStr = /\D+[ID]\s\s+/;

console.log(validarStr.test("ola diogo ID")) 
