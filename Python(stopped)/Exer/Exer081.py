list = []
while True:
    num = int(input("Digite um valor: "))
    list.append(num)
    while True:
        sn = str(input("Gostaria de começar [S/N]: ")).upper().strip()
        if sn == 'S' or sn == 'N':
            break
    if sn == 'N':
        break
print(f'Você digitou {len(list)}')
print(list.sort(reverse=True))
if list.remove(5) == Error:
    print("Não existe 5")
else:
    print("Há numero 5")