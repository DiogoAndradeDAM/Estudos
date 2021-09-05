idadecar = 0
mulhercar = 0
homemcar = 0
for c in range(1, 5):

#Entrada de dados
    nome = str(input("Digite seu nome: "))
    idade = int(input("Digite sua idade: "))
    idadecar += idade
    sexo = int(input("""Digite seu sexo 
    [1] para masculino
    [2] para feminino: """))

#Analisador
    if sexo == 1:
        if homemcar < idade:
            homemcar = idade
            velho = nome
    elif sexo == 2:
        if idade < 20:
            mulhercar += 1
    media = idadecar/4

#Saida de dados
print("""A média de idade das pessoas é {}
      O homem mais velho é {}
      O número de mulheres com menos de 20 anos é {}""".format(media, velho, mulhercar))