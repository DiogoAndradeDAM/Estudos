def contador(inicio, fim, passo):
    while True:
        if passo == 0:
            passo = 1
        elif inicio < fim:
            for c in range(inicio, fim+1, passo):
                print(c, end=' ')
            break
        elif inicio > fim:
            if passo < 0:
                passo *= -1
            for c in range(inicio, fim-1, -passo):
                print(c, end=' ', flush=True)
            break

def linha():
    print()
    print("-"*50)


linha()
contador(1, 10, 1)
linha()
contador(10, 1, 1)
linha()
contador(int(input("Digite o valor de início: ")), int(input("Digite o valor do final: ")), int(input("Digite a condição: ")))
linha()
