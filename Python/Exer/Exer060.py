n1 = int(input("Digite um número: "))
print("O fatorial do número {} é:".format(n1))
print("{}!=".format(n1), end='')
soma = 1
while n1 != 0:
    print(n1, end='x')
    soma = soma * n1
    n1 -= 1
print('= {}'.format(soma), end=' ')