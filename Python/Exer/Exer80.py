lista = []
listav = []
for c in range(0, 5):
    num = int(input("Digite um número: "))
    lista.append(num)
listav.insert(0, max(lista))
listav.insert(0, min(lista))
lista.remove(max(lista))
lista.remove(min(lista))

for d in range(0, 3):
    if listav[d] < lista[d]:
        listav.insert(d+1, lista[d])
    elif listav[d] > lista[d]:
        listav.insert(d, lista[d])
print(listav)
print((lista))
