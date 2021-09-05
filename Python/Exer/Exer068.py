from random import randint
#carregadores
car = 0
resultadof = ''
while True:
    #Entrada de dados
    resposta = str(input("impar ou par?: ")).lower().strip()[0]
    resposta1 = int(input("Digite o número: "))

    # Bot
    if resposta1 == 'i':
        bot1 = 'p'
    elif resposta1 == 'p':
        bot1 = 'i'
    bot22 = randint(0, 10)

    #Calculo
    soma = bot22+resposta1
    result = soma%2

    #Jogo
    if result == 1:
        resultadof = 'i'
    else:
        resultadof = 'p'
    if resultadof == resposta:
        car +=1
        print("Parabéns você acertou. Denovo")
    else:
        break

#Saída de dados
print("Eu Ganhei!! uhuuuu!!")
print("Você errou")
print(f"Você venceu {car} vezes, parabéns")
