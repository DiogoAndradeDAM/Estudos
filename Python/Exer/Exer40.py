n1 = float(input("Primeira nota"))
n2 = float(input("Segunda nota"))
c = (n1+n2)/2
if c <= 5.0:
    print("Reprovado")
elif c > 5.0 and c< 7.0:
    print("Recuperação")
else:
    print("Aprovado")