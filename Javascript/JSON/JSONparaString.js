let pessoa = {
    "nome": "Matheus",
    "idade": 28,
    "profissao": "Programador",
    "hobbies": ["Video game", "Leitura", "Correr"]
}

//Transformando JSON em string
let pessoaTexto = JSON.stringify(pessoa);
console.log(pessoaTexto);
console.log(pessoaTexto.nome);

let pessoaJSON = JSON.parse(pessoaTexto);
console.log(pessoaJSON);
console.log(pessoaJSON.nome)