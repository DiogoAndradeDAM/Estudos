/*
 Podemos cria funções assíncronas com a palavra reservada async

 Elas retornam uma Promise

 Se retirnar algo, a promessa é resolvida, se der alguma exception a promessa é rejeitada

 Assim estas functions possuem as funcionalidades de resolve e reject por padrão, mas após isso ela é uma promisse normal 
*/
 

async function somar(a, b) {
    return a + b
}

console.log(somar(2,5))

somar(2, 4).then(value => console.log(value))
