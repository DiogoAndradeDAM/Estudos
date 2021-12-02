exp = str(input("Digite a expressão: "))
lista = []
lista.append(exp)
lista.append('d')
car = car2 = 0
for c in lista:
    if lista == '(':
        car = car - 1
if car == car2:
    print("Está correto")
else:
    print("Está incorreto")
print(car)
