def voto(data):
    idade = 2021 - data
    if idade < 18:
        s = "Voto negado"
    elif idade >= 18 and idade < 65:
        s = "Voto obrigatório"
    else:
        s = "Voto opcional"
    return s

r1 = voto(1950)
print(r1)