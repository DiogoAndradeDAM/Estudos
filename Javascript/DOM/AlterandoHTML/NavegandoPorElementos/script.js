//parentElement: serve para buscar o elemento pai
//parentNode: serve para buscar o nó pai

const el = document.querySelector('body script')

//console.log(el.childNodes)
//console.log(el.children) retorna um HTML collection ao invés de node

//console.log(el.firstChild) leva inconsideração os espaços //firstElementChild não leva em condição os espaços

//console.log(el.lastChild) //lastElementChild

//Navegando por elementos irmãos
/*
nextSibling retorna node, não igonora espaços vazios

nextElementSibling retorna elemento HTML, ignora espaços vazios

*/

/*
previousSibling não igonora espaços vazios

previousElementSibling ignora espaços vazios
*/

console.log(el.previousElementSibling)
