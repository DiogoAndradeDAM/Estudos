from Exer109 import Moedas
print("Vamos analisar")
n = float(input("Digite um número por favor: "))
p = float(input("Digite um número de procentagem: "))
print(f"O valor digitado foi {Moedas.moeda(n)}")
print(f"O dobro do número é {Moedas.dobro(n, True)}")
print(f"A metade do número é {Moedas.metade(n, True)}")
print(f"O número com a diminuição de {Moedas.moeda(p)}% é {Moedas.diminuir(n, p, True)}")
print(F"O número com o adição de {Moedas.moeda(p)}% é {Moedas.aumentar(n, p, True)}")
