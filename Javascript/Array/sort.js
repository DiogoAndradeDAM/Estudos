/* Organiza array com string em ordem alfabética //

const fruits = ["Banana", "Orange", "Apple", "Mango"];
console.log(fruits.sort())
*/

/* reverse() Espelha a ordem dos itens do array //

const fruits = ["Banana", "Orange", "Apple", "Mango"];
console.log(fruits.reverse());
*/

/* Serve para organizar arrays em ordem alfabética dependendo se o valor retornado na função for positve, negative ou 0. Por exemplo: No caso da lista abaixo as variáveis ficam a= 40 e b = 100, 
 - caso o valor retornado seja positive á lista é organizada em ordem decrescente
 -caso o valor retornado seja negative á lista é organizada em ordem crescente
 -caso o valor retornado seja 0 não ocorre alteração de valores


const points = [40, 100, 1, 5, 25, 10];
points.sort(function(a, b){return a - b});
ou
const points = [40, 100, 1, 5, 25, 10];
points.sort(function(a, b){return b - a});
*/

/* Sorteando valores aleatórios em um array com a técnica "Fisher Yates shuffles" //

const points = [40, 100, 1, 5, 25, 10];

for (let i = points.length -1; i > 0; i--) {
  let j = Math.floor(Math.random() * i)
  let k = points[i]
  points[i] = points[j]
  points[j] = k
}
*/

