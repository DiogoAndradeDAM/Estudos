from Exer108 import Moedas
print("Vamos analisar")
n = float(input("Digite um número por favor: "))
p = float(input("Digite um número de procentagem: "))
print(f"O valor digitado foi {Moedas.moeda(n)}")
print(f"O dobro do número é {Moedas.moeda(Moedas.dobro(n))}")
print(f"A metade do número é {Moedas.moeda(Moedas.metade(n))}")
print(f"O número com a diminuição de {Moedas.moeda(p)}% é {Moedas.moeda(Moedas.diminuir(n, p))}")
print(F"O número com o adição de {Moedas.moeda(p)}% é {Moedas.moeda(Moedas.aumentar(n, p))}")
