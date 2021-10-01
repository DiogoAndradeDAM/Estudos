/*
Além do resolve, há o método reject

Que é quando determinada ç´pgica não satisfaz nosso programa então podemos ir para outra com o reject, em vez do resolve

Resolve e reject terminam a Promise, ou seja, não podemos chamar mais o then
*/

/* Agora utilizamos Promises com funções

let p = new Promise.resolve((resolve, reject) => {
    if(num == 2) {
        resolve(`O número é ${num}`)
    } else {
        reject(new Error("Falhou"))
    }
})
*/

function verificarNumero(num) {
    return new Promise((resolve, reject) => {
        if(num == 2) {
            resolve(console.log(`O número é ${num}`))
        } else {
            reject(new Error("Falhou"))
        }
    })
}

verificarNumero(2)
verificarNumero(5)