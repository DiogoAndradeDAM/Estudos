lista = list()
listamulher = list()
listacima = list()
car = soma = 0
while True:
    car += 1
    pessoas ={'nome': str(input("Digite o nome da pessoa: ")).capitalize().strip(),
    'idade': int(input("Digite a idade da pessoa: ")),
    'sexo': str(input("Digite o sexo da pessoa [F/M]: ")).upper().strip()[0]
    }
    soma += pessoas['idade']
    media = soma/car
    if pessoas['sexo'] == 'F':
        listamulher.append(pessoas['nome'])
    if pessoas['idade'] > media:
        listacima.append(pessoas['nome'])
    lista.append(pessoas.copy())
    while True:
        sn = str(input("Você gostaria de continuar e digitar mais pessoas?: ")).upper().strip()[0]
        if sn == 'S' or sn == 'N':
            break
    if sn == 'N':
        break
print(f"Você cadastrou {car} pessoas")
print(f"A média de idade do grupo é {media}")
print(f"Você digitou o nome das mulheres {listamulher} ")
print(f"As pessoas com idade acima da média é: {listacima}")
