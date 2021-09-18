function criarTabuada(){
    let num = document.getElementById('num')
    let resposta = document.getElementById('res')
    if (num.value.length == 0){
        window.alert('!ERROR! Os dados não foram preenchidos')
    } else{
        num = Number(num.value)
        let c = 1
        resposta.innerHTML = ''
        while (c <= 10){
            let item = document.createElement('option')
            item.text = `${num} x ${c} = ${num*c}`
            item.value = `resposta${c}`
            resposta.appendChild(item)
            c++
        }
    }
}