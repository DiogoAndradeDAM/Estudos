#Entrada de dados
n1 = int(input("Digite um numero: "))
n2 = 0

#timer
car = 0
print("\033[4;33mLembrando que todo numero digitado aparecerá x2 a quantidade digitadam recomenda-se 5\033[m")
timerlimitante = int(input("Quantas numeros devem aparecer na sequência?: "))

#Sequencia de Fibonacci
while car != timerlimitante:
    print(n2, end=' ')
    n2 +=n1
    print(n1, end=' ')
    n1 +=n2
    car += 1

#Saída de dados
n1 -= n2
print("= {}".format(n1), end='')