N = int(input("Digite um numero para analise de numeros primos "))
print("Seu valor digitado é {}".format(N))
for c in range(2, N):
    if N/c == 1:
        print("É um numero primo")
    elif N/c != 1:
        print("Não é primo")