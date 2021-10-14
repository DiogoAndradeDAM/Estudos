let btn1 = document.querySelector("#btn1")
let btn2 = document.querySelector("#btn2")
let p = document.querySelector("p")

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