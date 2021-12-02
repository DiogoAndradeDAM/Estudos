termo = int(input("Digite o termo da p.a: "))
razao = int(input("Digite a razão da p.a: "))
quantidade = int(input("Quantos termos você gostaria de ver?: "))
termo1 = termo
print("PA = ", end='')
while termo != 0:
    car = 0
    termo1 = termo
    while car != quantidade:
        print('\033[31m{}\033[m'.format(termo1), end=', ')
        termo1 += razao
        car += 1
    print("O primeiro termo é: {} e a razão é: {}".format(termo, razao))
    termo = int(input("Você gostaria de ver outros termos? Se sim digite o numero, se não digite 0: "))
print("Encerrando programa")
