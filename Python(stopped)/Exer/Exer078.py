from random import randint
lista = [randint(1, 10), randint(1, 10), randint(1, 10), randint(1, 10)]
print(lista)
print(max(lista))
print(min(lista))
for c, v in enumerate(lista):
    print(f"O número {v} está na {c} posição")