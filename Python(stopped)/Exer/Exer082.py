lista = []
listaimpar = []
listapar = []
sn = ''
while True:
    num = int(input("Digite um número: "))
    lista.append(num)
    conta = num%2
    if conta == 0:
        listapar.append(num)
    if conta == 1:
        listaimpar.append(num)
    while True:
        sn = str(input("Gostaria de continuar? [S/N]: ")).upper().strip()
        if sn == 'S' or sn == 'N':
            break
    if sn == 'N':
        break
print(lista, "Números digitados")
print(listapar, "Números pares digitados")
print(listaimpar, "Números ímpares digitados")