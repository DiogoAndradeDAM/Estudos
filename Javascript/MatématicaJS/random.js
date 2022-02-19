//A função matemática rando serve para escolher aleatoriamente um numero entre 0 e 1
console.log(`Random comum: ${Math.random()}`);

//Mas se pode multiplcar um número para que se possa achar um valor aleatorio entre 0 e o expoente, mas o resultado ainda é real
console.log(`Random com multiplicação: ${Math.random() * 10}`);


//Então usaremos o metodo floor para conseguirmos números inteiros
console.log(`Random com floor: ${Math.floor(Math.random() * 10)}`); //0 a 9

//Também podemos colocar numeros do lado de fora para fazermos uma adição ou subtração e mudar os valores que seram sorteados
console.log(`Random com adição: ${Math.floor(Math.random()*10)+1}`) //1 a 10
console.log(`Random com subtração: ${Math.floor(Math.random()*10)-1}`)// -1 a 8