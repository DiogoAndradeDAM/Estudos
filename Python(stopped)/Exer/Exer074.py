from random import randint
print("     Bem vindo     ")
maior = 0
menor = 999
bot1 = randint(1, 10)
bot2 = randint(1, 10)
bot3 = randint(1, 10)
bot4 = randint(1, 10)
bot5 = randint(1, 10)
tupla = (bot1, bot2, bot3, bot4, bot5)
for c in range(0, 5):
    if tupla[c] > maior:
        maior = tupla[c]
    if tupla[c] < menor:
        menor = tupla[c]

print(f"Sequência apresentada {tupla}")
print(f"Maior número: {maior}")
print(f"Menor número: {menor}")