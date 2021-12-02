Peso = float(input("Qual seu peso em Kg"))
Al = float(input("Qual sua altura em Metros"))
IMC = Peso/(Al*Al)
# IMC
if IMC < 18.5:
    print("Abaixo do peso ideal")
elif IMC > 18.5 and IMC < 25:
    print("Peso ideal")
elif IMC > 25 and IMC < 30:
    print("Sobre peso")
elif IMC > 30 and IMC < 40:
    print("Obesidade")
else:
    print("Obesiade mórbida")