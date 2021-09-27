const lista1 = [12, 13, 14, 15, 16, 17, 18];
const lista2 = ["Diogo", "Andrade", 16, 170];

function analizadorDeQuantidades(lista) {
    tam = lista.length;
    if (tam < 5) {
        console.log("A poucos itens na lista");
    } else if (tam == 5){
        console.log("Na media certa");
    } else {
        console.log("A muitos itens na lista");
    }
}

analizadorDeQuantidades(lista1);
analizadorDeQuantidades(lista2);