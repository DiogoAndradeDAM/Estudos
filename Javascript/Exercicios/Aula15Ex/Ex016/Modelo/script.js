function contar(){
    let inicio = document.getElementById('inicio')
    let fim = document.getElementById('fim')
    let passo = document.getElementById('passo')
    let resposta = document.querySelector('div#res')

    if (inicio.value.length == 0 || fim.value.length == 0 || passo.value.length == 0){
        resposta.innerHTML = 'Impossivel contar'
        window.alert('ERROR você não preencheu todos os dados')
    } else {
        resposta.innerHTML = "Contando..."
        inicio = Number(inicio.value)
        fim = Number(fim.value)
        passo = Number(passo.value)

        if (passo <= 0){
            window.alert('Passo inválido! Considerando passo 1')
            passo = 1
        }
        if (inicio < fim){
            for (let c = inicio; c <= fim; c += passo){
                resposta.innerHTML += `${c} \u{1F449}`
            }
        } else {
            for (let c = inicio; c >= fim; c -= passo){
                resposta.innerHTML += `${c} \u{1F449}`
        }
        resposta.innerHTML += `\u{1F3C1}`
    }
    }
}