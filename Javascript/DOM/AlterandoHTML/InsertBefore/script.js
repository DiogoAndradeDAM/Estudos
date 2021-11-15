let novoElemento = document.createElement("p")
let texto = document.createTextNode("Algum texo")

novoElemento.appendChild(texto) // Também existe o prepend para adicionar um elemento no inicio

let elementoAlvo = document.querySelector("#titulo-principal")
let elementoPai = document.querySelector("#container-principal")

elementoPai.insertBefore(novoElemento, elementoAlvo)

