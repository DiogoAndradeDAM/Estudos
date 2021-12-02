'#Declaração de variaveis'
import random
maquinan = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
palpites = 0
maquinar = 11
resposta = 0

'#entrada de dados'
while resposta != maquinar:
    maquinar = random.choice(maquinan)
    resposta = int(input("""Vamos jogar um jogo.Você deverá adivinhar o numero
escolhido pela máquina para ganhar, uma dica os numeros
escolhidos pela maquina vão de 0 a 10: """))
    palpites += 1

'Saída de dados'
print("Parabéns você acertou o numero é {}".format(resposta))
print("Quantidades de palpites necessários pra finalizar {}".format(palpites))
