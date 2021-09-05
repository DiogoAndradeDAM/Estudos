from random import randint
numeros = list()
def sorteia():
    for c in range(1, 6):
        numeros.append(randint(1, 10))

def somapar(valor):
    car = 0
    for c in numeros:
        if c % 2 == 0:
            car += c
    print(f"Os números sorteados foram: {numeros}")
    print(f"A soma dos numeros pares são : {car}")


somapar(sorteia())
