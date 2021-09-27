const lista = ["Diogo", "Andrade", 16, 170, "Moura"];

function Juntador(lista) {
    const separado = lista.split(",");
    const listaJutanda = separado.join("");
    return listaJutanda 
}

console.log(Juntador(lista))