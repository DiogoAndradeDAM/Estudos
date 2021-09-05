from random import randint
from time import sleep
resultado = list()
print("-"*40)
print("/   gerador de números da \033[1m MEGA SENA \033[m  /")
print("-"*40)
timer = int(input("Digite quantos jogos quer ver: "))
for c in range(0, timer):
    num = [randint(1, 61), randint(1, 61), randint(1, 61), randint(1, 61), randint(1, 61), randint(1, 61)]
    resultado.append(num[:])
    num.clear()
    print(f"Jogo {c+1}: {resultado[c]}")
    sleep(1)
    print("-"*40)
print("Final do programa")