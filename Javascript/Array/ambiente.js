let num = [5, 8, 2, 9, 3]
//num[5] = 6 mesma coisa do código abaixo
num.push(7)


//Comprimento do Array
num.length

// Deixa o Array em ordem crescente
num.sort()

for (let i = 0; i < num.length; i++){
    console.log(`${num.sort()[i]} é o ${i+1} valor da lista`)
}

//OU

for (let pos in num){
    console.log(num[pos])
}
console.log('')
//Buscar valores dentro de um vetor. Ele te dará a posição do valor na lista, se retorna -1 significa que o valor não foi encontrado.
num.indexOf(7)

console.log(num.indexOf(2))