sn = ''
lista = []
while True:
    n = int(input("Digite um valor: "))
    if n not in lista:
        print("O número foi adicionado")
        lista.append(n)
    else:
        print("O número já foi digitado e não foi colocado")
    while True:
        sn = str(input("Você gostaria de continuar? [S/N]: ")).upper().strip()
        if sn == 'S' or sn == 'N':
            break
    if sn == 'N':
        break
print(lista)