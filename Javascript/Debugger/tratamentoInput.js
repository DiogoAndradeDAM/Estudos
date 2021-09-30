function checarNumero(num) {
    let number = Number(num);
    if(Number.isNaN(number)) {  //Checa se a váriavel não é número
        console.log("Por favor, passe só números para o programa")
    } else {
        return number
    }
}

console.log(checarNumero(56))
console.log(checarNumero("sadh"))
