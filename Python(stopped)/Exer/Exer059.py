'Entrada de dados'
n1 = int(input("Digite o primeiro número: "))
n2 = int(input("Digite o segundo número: "))
resposta = 0

'Menu'
while resposta != 5:
    print(  "Digite um dos numeros abaixo para que possa executar uma ação")
    resposta = int(input("""          [1] somar
          [2] multiplicar
          [3] maior
          [4] novos números
          [5] sair do programa: """))
    if resposta == 1:
        calculos = n1 + n2
        print("\033[32mA soma entre {} e {} resultou em {}\033[m".format(n1, n2, calculos))
    elif resposta == 2:
        calculom = n1 * n2
        print("\033[32mA multiplicação entre {} e {} resultou em {}\033[m".format(n1, n2, calculom))
    elif resposta == 3:
        if n1 < n2:
            calculomaior = n2
            print("\033[32mO maior numero entre {} e {} é: {}\033[m".format(n1, n2, calculomaior))
        else:
            calculomaior = n1
            print("\033[32mO maior numero entre {} e {} é: {}\033[m".format(n1, n2, calculomaior))
    elif resposta == 4:
        n1 = int(input("Digite o primeiro número: "))
        n2 = int(input("Digite o segundo número: "))

print("\033[37;40mEncerrando programa aguarde ------\033[m")
