//parentElement: serve para buscar o elemento pai
//parentNode: serve para buscar o nó pai

const el = document.querySelector('body header')

//console.log(el.childNodes)
//console.log(el.children) retorna um HTML collection ao invés de node

//console.log(el.firstChild) leva inconsideração os espaços //firstElementChild não leva em condição os espaços

//console.log(el.lastChild) //lastElementChild

//Navegando por elementos irmãos. pega o próximo elemento irmão do elemento atual
/*
nextSibling retorna node, não igonora espaços vazios

nextElementSibling retorna elemento HTML, ignora espaços vazios

*/

/*Retorna o elemento anterior ao elemento atual
previousSibling não igonora espaços vazios

previousElementSibling ignora espaços vazios
*/

/*
console.log(el.parentElement) //Retorna o elemento pai
*/

/*retorna os filhos do elemento atual como elementos de um array.
console.log(el.children[0]);
*/



console.log(el.previousElementSibling)
