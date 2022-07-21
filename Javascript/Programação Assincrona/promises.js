/*
    A promise é algo que irá acontecer no futuro e poderá dar certo ou
    errado, mas irá acontecer

let p = Promise.resolve(5)

console.log("Outros códigos")

console.log(p)

p.then((value) => {return value + 5})
 .then((value) => {console.log(`O valor é ${value}`)})
*/
let aceitar = true

console.log("Pedir uber")
const promessa = new Promise((resolve, reject) => {//resolvido, rejeitado
    if(aceitar){
        return resolve("pedido aceito")
    }else{
        return reject("pedido negado")
    }
})

console.log("Aguardando");

promessa
    .then(result => console.log(result))
    .catch(erro => console.log(erro))
    .finally(() => console.log("Finalizado"))


