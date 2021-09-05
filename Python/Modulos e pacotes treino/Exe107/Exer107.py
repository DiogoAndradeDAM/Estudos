import Moedas
print("Vamos analisar")
n = float(input("Digite um número por favor: "))
p = float(input("Digite um número de procentagem: "))
print(f" O valor digitado foi {n}")
print(f"O dobro do número é {Moedas.dobro(n)}")
print(f"A metade do número é {Moedas.metade(n)}")
print(f"O número com a diminuição de {p}% é {Moedas.diminuir(n, p)}")
print(F"O número com o adição de {p}% é {Moedas.aumentar(n, p)}")
