/*
 Generators funcionam semelhantes as Promises

 Onde ações podem ser pausadas e continuadas depois

 Caracterizadas pelo function* e yield, veja:

 O yield pode salvar o estado da variável
*/

function* criadorId() {
    let id = 0
    while (true) {
        yield id++
    }
}

let criaId = criadorId()

console.log(criaId.next().value)
console.log(criaId.next().value)
console.log(criaId.next().value)
console.log(criaId.next().value)

console.log(criaId.next())