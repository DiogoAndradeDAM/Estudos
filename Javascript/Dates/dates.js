/*Criando uma variavel para datas 

new Date(year, month, day, hours, minutes, seconds, milliseconds)
new Date(milliseconds)
new Date(date string)

*/

const d = new Date()
const d2 = new Date(2018, 11, 24, 10, 33, 30, 0) //Os meses são selecionados de 0 a 11; 0 = January - 11 = December
const d3 = new Date("October 13, 2014 11:13:00") //dateStrings 
const d4 = new Date(1000) //Date() com miliseconds. Não há como colocar só o ano com o Date()
//d5 = d.toString() //Você pode converter uma data para uma string
//d6 = d.toUTCString() //Conversão para string em padrão UTC
//d7 = d.toDateString() //Converte para uma string com um formato: dia_semana mes dia ano
//d8 = d.toISOString() //Converte para string em parão ISO
console.log(d4)