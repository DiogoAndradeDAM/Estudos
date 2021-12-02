#Interface
print("-="*30)
print("\                    Caixa Eletrônico                      /")
print("--"*30)

#Carregadores
car50 = 0
car20 = 0
car10 = 0
car1 = 0

while True:
    #Entrada de dados
    valor = int(input("Digite o valor que gostaria de sacar: "))

    #Processamento de dados
    if valor >= 50:
        car50 = valor//50
        valor50 = car50*50
        valor -= valor50

    if valor >= 20:
        car20 = valor//20
        valor20 = car20*20
        valor -= valor20

    if valor >= 10:
        car10 = valor//10
        valor10 = car10*10
        valor -= valor10

    if valor >= 1:
        car1 = valor//1
        valor1 = car1*1
        valor -= valor1

    if valor == 0:
        break

#Saída de dados
print(f"""Você irá receber
\033[32m{car50} notas de R$50,00
{car20} notas de R$20,00
{car10} notas de R$10,00
{car1} notas de R$1,00\033[m
Tenha um bom dia! """)
