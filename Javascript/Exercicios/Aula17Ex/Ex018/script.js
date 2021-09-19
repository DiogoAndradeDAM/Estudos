// Adicionador de números à lista
var lista = []
function enviar(){
    //Declaração de variáveis
    let num = document.getElementById('num')
    let listador = document.getElementById('listador')
    let option = document.createElement('option')
    //Depurador de dados
    if (num.value.length == 0 || num.value < 1 || num.value > 100) {
        window.alert("!ERROR! Entrada de dados inválida")
    } else {
        // Criador de opção
        num = Number(num.value)
        option.text = `Você digitou o número ${num}`
        option.value = `numver${num}`
        listador.appendChild(option)
        lista.push(num)
    }
}

// Analise dos elementos da lista

function criar_lista(){
    // Depurador de lista
    if (lista.length == 0){
        window.alert("!ERROR! Você não adicionou nenhum valor a lista")
    } else {
        //Declaração de variáveis
        let resposta = document.getElementById('res')
        lista.sort()
        let total = lista.length
        // Achador de média, soma, menor e maior
        let media = 0
        let soma = 0
        let maior = lista[0]
        let menor = lista[0]
        for (let pos in lista){
            soma += lista[pos]
            if (menor > lista[pos]){
                menor = lista[pos]
            }
            if (maior < lista[pos]){
                maior = lista[pos]
            }
        }
        media = soma/total
        //Saída de dados
        resposta.innerHTML = `Você digitou um total de ${total} números              
        O maior número é ${maior}
        O menor número é ${menor}
        A siam entre os número é de ${soma}
        A média dos números é ${media}`
    }
}