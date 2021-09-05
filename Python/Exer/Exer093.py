lista = list()
while True:
    totalgols = 0
    fut = {'nome':str(input("Digite o nome do jogador: ")),
    'jogos':int(input("Quantos jogos ele jogou?: "))
    }
    for c in range(1, fut['jogos']+1):
        fut[f'golsjogo{c}'] = int(input(f"Digite quantos gols ele fez no {c} jogo: "))
        totalgols += fut[f'golsjogo{c}']
    fut['totalgols'] = totalgols
    fut['media'] = totalgols / fut['jogos']
    lista.append(fut.copy())
    while True:
        sn = str(input("Você gostaria de continuar a digitar? [S/N]: ")).strip().upper()[0]
        if sn == 'S' or sn == 'N':
            break
    if sn == 'N':
        break
print("-="*25)
print(f"ID       Nome    Jogos   Gols   Média  ")
print("-"*50)
for v in range(0, len(lista)):
    print(f"{v:^2} {lista[v]['nome']:^15}{lista[v]['jogos']:^2}      {lista[v]['totalgols']:^2}     {lista[v]['media']:^4}")
print("-="*25)
while True:
    Id = int(input("Gostaria de ver mais detalhes de um jogador? digite seu ID, se não digite 999: "))
    if Id == 999:
        break
    print("-" * 70)
    print(lista[Id])
    print("-" * 70)
print("Tenha um bom dia. \033[37mFinalizando programa(...)\033[m")