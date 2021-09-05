lista = list()
print("-="*25)
print(">"*16, "Cadastre o aluno", "<"*16)
while True:
    info = [str(input("Digite o nome do aluno: ").strip()),
            float(input("Digite a primeira nota do aluno: ")),
            float(input("Digite a segunda nota do aluno: "))]
    media = (info[1] + info[2])/2
    info.append(media)
    lista.append(info[:])
    info.clear()
    while True:
        sn = str(input("Gostaria de continuar?: ")).upper().strip()[0]
        if sn == 'S' or sn == 'N':
            break
    if sn == 'N':
        break
print("-="*25)
print("Posição   Aluno        Nota1  Nota2  Média ")
print("-="*25)
for c in range(0, len(lista)):
    print(f"{c:^2} {lista[c][0]:^20}{lista[c][1]:^4}    {lista[c][2]:^4}= {media:^4}")
print("-"*50)
print("Gostaria de ver algum aluno cadastrado especifico?")
while True:
    achador = int(input("Digite sua posição e caso não queira digite \033[1m999\033[m: "))
    if achador == 999:
        break
    print("-"*30)
    print("Posição   Aluno        Nota1  Nota2  Média ")
    print(f"{achador:^2} {lista[achador][0]:^20}{lista[achador][1]:^4}   {lista[achador][2]:^4} = {media:^4}")
    print("-"*30)
print("\033[37mFinalizando programa(.....)\033[m ")