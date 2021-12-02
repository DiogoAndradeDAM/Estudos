tupla = ('leite', 2.50, 'Cereal', 5.20, 'Pão', 0.35, 'Nescau', 5.00, 'Mortadela', 2.00)

print("-="*15)
print("  Bem vindo ao nosso mercado ")
print("-="*15)
print("Preços:")

#Processamento
tuplatam = len(tupla)
preco = 1
produto = 0
while True:
    produtotam = len(tupla[produto])
    falta = 15 - produtotam
    # Saída de dados
    print(tupla[produto], "."*falta, "R$", tupla[preco])
    preco += 2
    produto += 2
    if preco > tuplatam:
        break
print("-="*15)
