nome = str(input("Digite seu nome: "))
data_de_nascimento = int(input("Digite sua data de nascimento: "))
ctps = int(input("Digite o número da sua carteira de trabalho, caso não tenha digite 0: "))
idade = 2021 - data_de_nascimento
cadas = {'nome': nome, 'data_nascimento': data_de_nascimento, 'carteira':ctps,
         'idade': idade}
if ctps != 0:
    ano_contrato = int(input("Digite a data de contrato: "))
    salario = float(input("Digite se salário: "))
    aposentadoria = (35 -(2021 - ano_contrato)) + idade
    cadas['ano_contrato'] = ano_contrato
    cadas['salario'] = salario
    cadas['aposen'] = aposentadoria
    print(f" Olá Sr(a) {cadas['nome']} sua data de nascimento {cadas['data_nascimento']} e idade {cadas['idade']} anos")
    print("-" * 55)
    print(f"código de carteira de trabalho {cadas['carteira']} foi contratado em {cadas['ano_contrato']}")
    print(f"salário R${cadas['salario']} irá se aposentar com {cadas['aposen']} anos")

else:
    print(f" Olá Sr.(a) {cadas['nome']} sua data de nascimento {cadas['data_nascimento']} e sua idade é {cadas['idade']}")
