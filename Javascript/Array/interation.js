/*forEach() é um método que recebe como parâmetro uma callback function

let array = [100, 90, 50, 30, 10]
let txt = ""
console.log(array.forEach(myFunction()))

function myFunction(value){
  txt += value + "<br>"
}

*/

/*map() É um método que recebe como parâmetro uma callback funcion
//Ela cria um novo array com os itens de um outro array que sofreram uma transformação, mas a transformação percorre cada item do array

const numbers1 = [45, 4, 9, 16, 25];
const numbers2 = numbers1.map(myFunction);

function myFunction(value) {
  return value * 2;
}

*/

/*filter() É um método que recebe como parâmetro uma callback function
//Ela cria um novo array com os itens de outro array que passaram em um teste

const numbers = [45, 4, 9, 16, 25];
const over18 = numbers.filter(myFunction);

function myFunction(value, index, array) {
  return value > 18;
}

*/

/*reduce() É um método que recebe como parâmetro uma callback funtion
//Ela faz uma soma dos valores dentro de um array e armazena ela em uma variavel

const numbers = [45, 4, 9, 16, 25];
let sum = numbers.reduce(myFunction);

//let sum = numbers.reduce(myFunction, 100); //Ela pode receber um valor adicional a mais

function myFunction(total, value) { 
  return total + value;
}

*/

/*indexOf() e lastIndexOf() É um método que recebe como parâmetro uma callback funtion
//Este método já foi explicado em string methods

*/

/*find() É um método que recebe como parâmetro uma callback funtion
//Este método é similar ao filter(), mas este método só retorna o primeiro item que passar no teste
*/

/*includes() É um método que recebe como parâmetro uma callback funtion
//Este método parece muito com o indexOf(), mas este método também pode procurar por NaN

const fruits = ["Banana", "Orange", "Apple", "Mango"];
fruits.includes("Mango"); // is true
*/