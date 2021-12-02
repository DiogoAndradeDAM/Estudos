car = 0
media = 0
maior = 0
menor = 9999999
resposta = ''
while resposta != 'N':
    valor = int(input("Digite um número: "))
    car += 1
    media += valor
    if maior < valor:
        maior = valor
    if menor > valor:
        menor = valor
    resposta = str(input("Você gostaria de continuar? [S/N] ")).upper()
mediareal = media/car
print("""\033[37mVocê digitou {} números\033[m 
\033[36ma média entre eles é: {}\033[m
\033[32mO maior é: {}\033[m
\033[33mO menor é: {}\033[m""".format(car, mediareal, maior, menor))