from random import randint


def dados(tipo, quan):
    for c in range(1, quan+1):
        valor = randint(1, tipo+1)
        print(f"{valor}", end=" ")


def menu(lista_atos):
    for n, c in enumerate(lista_atos):
        print(f"\033[32m [ {n:^2}]\033[m \033[36m{c}\033[m")


