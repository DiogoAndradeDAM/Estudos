/*
 Sempre que uma tecla é pressionada são gerados dois eventos: keyup(soltar a tecla) e keydown(tecla pressionada)

*/

window.addEventListener("keydown", function(e) {

    if(e.key == "q") {
        console.log("Clicou em q")
    } else if(e.key == "Enter") {
        console.log("Apertou enter")
    }
})

window.addEventListener("keyup", function(e) {
// O modo keyup pode ser mais interessante pois não permite cliques infinitos ao segurar a tecla
    if(e.key == "Enter") {
        console.log("Soltou o enter")
    }
})