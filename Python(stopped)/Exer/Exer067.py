while True:
    resposta = int(input("Digite um número para que se possa fazer uma tabuada deste: "))
    if resposta < 0:
        break
    for c in range(1, 11):
        print(f"{resposta} x {c} = {resposta*c}")
print("Fim")