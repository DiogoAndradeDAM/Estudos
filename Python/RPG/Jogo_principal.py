#Classes

#Funções
def menu():
    atos = ["configurações", "percepção", "inventário", "andar"]
    for n, c in enumerate(atos):
        print(f"{n:^2}{c}")


#Programa principal
menu()