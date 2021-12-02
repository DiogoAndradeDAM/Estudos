car = 0
car1 = 0
for c in range(1, 8):
    idade = int(input("Digite a data de nascimento da {} pessoa ".format(c)))
    conta = 2021 - idade
    if conta >= 18:
        car += 1
    else:
        car1 += 1
print("Idade maior que 18 {}, menor que -18 {}".format(car, car1))
