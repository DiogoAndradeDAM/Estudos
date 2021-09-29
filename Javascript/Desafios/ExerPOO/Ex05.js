// Conta bancária

class Conta {
    constructor(contaCorrente, contaPoupança, jurosPoupança) {
        this.contaCorrente = contaCorrente;
        this.contaPoupança = contaPoupança;
        this.jurosPoupança = jurosPoupança;
    }

    depositar(valor, tipoConta) {
        if (tipoConta === "Conta Corrente" || tipoConta === "ContaCorrente") {
            this.contaCorrente += valor;
        } else if (tipoConta === "Conta Poupança" || tipoConta === "ContaPoupança") {
            this.contaPoupança += valor;
        }
    }

    transferir(valor, contaDestinatario) {
        if (contaDestinatario === "Conta Corrente" || contaDestinatario === "ContaCorrente") {
            this.contaPoupança -= valor;
            this.contaCorrente += valor;
        } else if (contaDestinatario === "Conta Poupança" || contaDestinatario === "ContaPoupança") {
            this.contaCorrente -= valor;
            this.contaPoupança += valor;
        }
    }
}
Conta.prototype.contaCorrente = 0;
Conta.prototype.contaPoupança = 0;
Conta.prototype.jurosPoupança = 2.5;

//Conta especialclass ContaEspecial extends Conta {


let contaNormal = new Conta(1000, 100, 2.5)

contaNormal.depositar(400, "Conta Corrente")
contaNormal.transferir(200, "Conta Poupança")

console.log(contaNormal)

class ContaEspecial extends Conta {
    constructor(contaCorrente, contaPoupança, jurosPoupança) {
        super(contaCorrente, contaPoupança, jurosPoupança*2)
    }

}

let conta2 = new ContaEspecial(1000, 200, 1)

console.log(conta2)