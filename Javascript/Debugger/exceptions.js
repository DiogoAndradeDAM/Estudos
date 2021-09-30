//throw serve para criar erros e encerrar o programa

function saudacao(nome) {
    if(typeof nome != "string") {
        throw new Error("O parâmetro nome precisa ser string")
    } else {
        console.log(`Olá ${nome}`)
    }
}

saudacao("Matheus")
saudacao(6)