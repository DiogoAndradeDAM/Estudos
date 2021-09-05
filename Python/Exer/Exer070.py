#Interface
print("\033[31m                          Bem vindo\033[m")
print("\033[33m-=\033[33m"*32)
print("""\033[33m/                     Caixa registradora                       /
/  Por favor digite o nome dos produtos e seus preços abaixo   /\033[33m""")
print("\033[33m-=\033[m"*32)
#carregadores
somavalor = milmenor = 0
barato = 9999999999999999
baratonome = ''

#Entrada de dados
while True:
    nome = str(input("Digite o nome do produto: ")).capitalize()
    valor = float(input("Digite o preço do produto: "))

    #Analise de dados
    somavalor += valor
    if valor < 1000:
        milmenor += 1
    if valor < barato:
        barato = valor
        baratonome = nome

    # Continuação
    cont = str(input("O senhor(a) gostaria de continaur a digitar produtos? [S/N]: ")).upper().strip()[0]
    if cont == 'N':
        break

#Saída de dados
print(f"""\033[34m O total gasto na compra foi de: {somavalor}
O senhor(a) comprou {milmenor} produtos a menos de R$1000,00
O menor preço pago foi R${barato} no produto: {baratonome}\033[m""")
print("\033[32mMuito obrigado pela preferência\033[m")
