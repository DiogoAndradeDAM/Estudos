lista = list()
cadastro = list()
pesadas = list()
leves = list()
car = 0
while True:
    cadastro.append(str(input("Digite o nome da pessoa: ")))
    cadastro.append(float(input("Digite o peso da pessoa: ")))
    car += 1
    if cadastro[1] > 80:
        pesadas.append(cadastro[0])
    else:
        leves.append(cadastro[0])
    lista.append(cadastro[:])
    cadastro.clear()
    while True:
        sn = str(input("Gostaria de continuar? [s/n]: ")).lower().strip()
        if sn == 's' or sn == 'n':
            break
    if sn == 'n':
        break
print(f"Foram cadastradas {car} pessoas")
print(f"Pessoas mais pesadas foram {pesadas}")
print(f"Pessaos mais leves foram {leves}")
