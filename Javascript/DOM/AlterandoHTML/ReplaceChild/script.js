let novoElemento = document.createElement("p")
let texto = document.createTextNode("Algum texto")

novoElemento.appendChild(texto)

let heading = document.querySelector("#titulo-principal")
let paiHeading = heading.parentNode

paiHeading.replaceChild(novoElemento, heading)

//parentElement: serve para buscar o elemento pai
//parentNode: serve para buscar o nó pai