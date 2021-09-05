#Carreagadores
homens = 0
mulher = 0
car = 0
print("   ", "-" * 15)
print("   ", "/ Cadastrador /")
print("   ", "-" * 15)
while True:
    # Entrada de dados
    idade = int(input("Digite a idade da pessoa: "))
    sexo = str(input("Digite o sexo desta pessoa [F/M]: ")).upper().strip()[0]
    #Processamento de dados
    if sexo == 'M':
        if idade < 18:
            homens += 1
    elif sexo == 'F':
        if idade < 20:
            mulher += 1
    car += 1
    #repetição?
    sn = str(input("Você gostaria de cadastrar mais pessoas [S/N]?: ")).upper().strip()[0]
    if sn == 'N':
        break
#Saída de dados
print("Finalizando cadastro...")
print(f""" Foram dastrados:
{homens} homens com menos de 18 anos
{mulher} mulheres com menos de 20 anos
E foram cadastrados {car} pessoas""")