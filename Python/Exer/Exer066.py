soma = resposta = 0
while True:
    resposta = int(input("Digite um numero, condição de parada 999: "))
    if resposta == 999:
        break
    soma += resposta
print(f" a soma dos numeros digitado é: {soma}")