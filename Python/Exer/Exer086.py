lista = list()
par = 0
maior2 = 0
for c in range(0, 3):
    for c2 in range(0, 3):
        num = int(input(f"Digite um número para a posição [{c}/{c2}]: "))
        lista.append(num)
        if num % 2 == 0:
            par += num
        if c == 1:
            if maior2 < num:
                maior2 = num
coluna3 = lista[2] + lista[5] + lista[8]
print(f"""[{lista[0]}] [{lista[1]}] [{lista[2]}]
[{lista[3]}] [{lista[4]}] [{lista[5]}]
[{lista[6]}] [{lista[7]}] [{lista[8]}]""")
print(f"Soma de números pares {par}")
print("Soma dos valores da terceira coluna {}".format(coluna3))
print(f"O maior valor da segunda linha é: {maior2}")