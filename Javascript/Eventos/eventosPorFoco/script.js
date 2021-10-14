/*
  Quando focamos em um elemento ou saímos dele, podemos tambpem atrelar um evento a esta ação

  Focus para quando um elemento foco e blur quando ele perde
*/

let input = document.querySelector("input")

input.addEventListener("focus", function() {

    console.log("Entrou no input")
})

input.addEventListener("blur", function() {
    console.log("Saiu do input")
})