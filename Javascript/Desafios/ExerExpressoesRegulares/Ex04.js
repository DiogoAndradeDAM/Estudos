// Criando um regex para valdiação de IPs

const validarIP = /\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}/;

console.log(validarIP.test("112.2.33.222"))