/*
 muitos elementos/teclas há tem ações pré-definidas, como clicar num link nos leva a outra página

 Podemos para este evento default, e criar uma lógica diferente para o evento

*/

let btn1 = document.querySelector("#btn1")
let btn2 = document.querySelector("#btn2")
let p = document.querySelector("p")
let a = document.querySelector("a")

function msg(e){
    console.log("Clicou no button")
    e.stopPropagation()
}
// (e) e (event) é a mesma coisa
btn1.addEventListener("click", msg)

btn2.addEventListener("click", function(event) {
    console.log(event)
})

p.addEventListener("click", () => {
    console.log("clicou no paragrafo")
})

a.addEventListener("click", (e) => {
    e.preventDefault()

    console.log("Não vai mudar de link")
})