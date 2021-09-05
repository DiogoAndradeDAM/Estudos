from UtilidadesCeV import Moeda
from UtilidadesCeV import Dado
print("Vamos analisar")
n = Dado.leiaDinheiro("Digite um valor: ")
p = float(input("Digite um número de procentagem: "))
print(f"O valor digitado foi {Moeda.moeda(n)}")
print(f"O dobro do número é {Moeda.dobro(n, True)}")
print(f"A metade do número é {Moeda.metade(n, True)}")
print(f"O número com a diminuição de {p}% é {Moeda.diminuir(n, p, True)}")
print(F"O número com o adição de {p}% é {Moeda.aumentar(n, p, True)}")

