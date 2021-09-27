let carro = {
    portas: 2,
    portamalas: '200l',
    motor: '2.0'
}

let adicionais = {
    tetosolar: true,
    arcondicionado: true,
}
// (objeto, concatenador)
Object.assign(carro, adicionais);

console.log(carro)

console.log(Object.keys(carro)[0])