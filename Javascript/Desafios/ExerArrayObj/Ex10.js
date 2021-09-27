const calculadora = {
    somar: function(n1, n2=0) {
        return n1 + n2
    },
    subtrair: function(n1, n2=0) {
        return n1 - n2
    },
    dividir: function(n1, n2=1) {
        return n1 / n2
    },
    multiplicar: function(n1, n2=1) {
        return n1 * n2
    }
}

console.log(calculadora.somar(2, 2))
console.log(calculadora.subtrair(4, 2))
console.log(calculadora.multiplicar(3, 3))
console.log(calculadora.dividir(10, 2))
