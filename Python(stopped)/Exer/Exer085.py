lista = list()
par = list()
impar = [999]
car = 0
for c in range(0, 7):
    num = int(input("Digite um valor: "))
    if num%2 == 1:
        impar.insert(0, num)
    else:
        par.append(num)
    lista.append(par)
    lista.append(impar)

print(impar)