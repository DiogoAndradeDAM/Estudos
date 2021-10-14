/*

*/

let btn1 = document.querySelector("#btn1")
let btn2 = document.querySelector("#btn2")

btn1.addEventListener("mousedown", function() {
    console.log("Apertou o botão")
})

btn1.addEventListener("mouseup", function() {
    console.log("Soltou o botão")
})

//Duplo clique
btn2.addEventListener("dblclick", () => {
    console.log("Clicou duas vezes")
})

btn2.addEventListener("contextmenu", (e) => {
    e.preventDefault()
    console.log("botão direito")
})