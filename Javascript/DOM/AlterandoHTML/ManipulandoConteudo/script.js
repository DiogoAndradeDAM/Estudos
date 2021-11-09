const element = document.querySelector("h1")
const element2 = document.querySelector("#segundo")
const elementInput = document.querySelector("input")

element.textContent += " Olá Devs!" //element.innerText
element2.innerHTML = "Olá <em>Diogo</em>"
elementInput.value = "Escreva algo"

console.log(element.textContent)
console.log(elementInput.value)