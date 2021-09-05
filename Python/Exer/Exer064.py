car = 0
soma = 0
resposta = int(input("Digite um numero: "))
while resposta != 999:
    if resposta != 999:
        car += 1
        soma += resposta
    resposta = int(input("Digite um numero: "))
print("Você digitou {} números".format(car))
print("A soma dos numeros digitados é: {}".format(soma))