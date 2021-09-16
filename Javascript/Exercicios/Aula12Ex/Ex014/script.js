function carregar(){
    var msg = window.document.getElementById('msg')
    var img = window.document.getElementById('imagem')
    var data = new Date()
    var hora = data.getHours()
    // hora = 11
    msg.innerHTML = `Agora são ${hora} horas`
    if (hora >= 0 && hora < 12){
        //Bom dia
        img.src = "Imagens/manha.png"
        document.body.style.background = '#edd3b5'
    } else if (hora >= 12 && hora < 18){
        //Boa tarde
        img.src = 'Imagens/tarde.png'
        document.body.style.background = '#e38c53'
    } else {
        //Boa noite
        img.src = 'Imagens/noite.png'
        document.body.style.background = '#152240'
    }
}