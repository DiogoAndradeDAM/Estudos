class Endereco {
    constructor(rua, bairro, cidade, estado) {
        this.rua = rua;
        this.bairro = bairro;
        this.cidade = cidade;
        this.estado = estado;
    }

    set setRua(ruaNova) {
        this.rua = ruaNova
    }

    set setBairro(bairroNovo) {
        this.bairro = bairroNovo
    }

    set setCidade(cidadeNova) {
        this.cidade = cidadeNova
    }

    set setEstado(estadoNovo) {
        this.estado = estadoNovo
    }
} 

let meuEndereco = new Endereco("Abre Alas", "Jardim da Conquista", "São Paulo", "São Paulo");

meuEndereco.setRua = "Sinha Moça"

console.log(meuEndereco)