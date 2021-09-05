from random import choice
print("Regras = Digite todas as respostas com letra maiuscula.")
J = str(input("Vamos jogar, Jo-ken-pô"))

#Bot
L = ['Pedra', 'Papel', 'Tesoura']
bj = choice(L)

#jogo
if bj == 'Pedra' and J == 'Tesoura':
    print("O bot vence por jogar pedra")
elif bj == 'Tesoura' and J == 'Pedra':
    print("Parábens você ganhou")
    print("Seu prêmio é uma pedra de crack")
elif bj == 'Papel' and J == 'Pedra':
    print("O bot vence por jogar papel")
elif bj == 'Pedra' and J == 'Papel':
    print("Parábens você ganhou")
    print("Seu prêmio será um bloco de folha sulfite")
elif bj == 'Tesoura' and J == 'Papel':
    print("O bot vence por jogar tesoura")
elif bj == 'Papel' and J == 'Tesoura':
    print("Parábens você ganhou")
    print("Seu prêmio será uma tesoura sem ponta")
elif J == 'papel' or J == 'pedra' or J == 'tesoura':
    print("Porra arrombado lê as regras")
else:
    print("Empate")

Z = input("Gostou do jogo")
if Z == 'Sim' or Z == 'sim':
    print("Obrigadinho")
    input("Digite algo para sair")
else:
    print("Caraí menó, só queria te divertir")
    input("Digite algo para sair")