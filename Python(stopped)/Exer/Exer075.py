#Entrada de dados
resp1 = int(input("Digite um nùmero: "))
resp2 = int(input("Digite outro número: "))
resp3 = int(input("Digite mais um número: "))
resp4 = int(input("Digite o ultimo número: "))
tupla = (resp1, resp2, resp3, resp4)

#Saída de dados
print(f"O número nove aparece {tupla.count(9)} vezes")
print(f"O número três aparaceu na posição {tupla.index(3) +1}")
for c in range(0, 4):
    soma = tupla[c] % 2
    if soma == 0:
        print(tupla[c], end=' ')
