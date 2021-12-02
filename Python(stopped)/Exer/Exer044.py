#pagamento
Z = float(input("Qual o valor da sua compra?"))
Y = int(input("""Qual sua forma de pagamento?
              Se for dinheiro/cheque    digite 1
              Se for cartão    digite 2
              Se for 2x no cartão    digite 3
              Se for 3x ou mais no cartão    digite 4"""))

#CALCULOS
c1 = Z-(Z*10/100)
c2 = Z-(Z*5/100)
c3 = Z+(Z*30/100)

#Forma
if Y == 1:
    print("A forma de pagamento é a vista no dinheiro/cheque, o valor a ser pago será de R${}".format(c1))
    print("Desconto de 10%")
elif Y == 2:
    print("A forma de pagamento é no cartão, o valor a ser pago será de R${}".format(c2))
    print("Desconto de 5%")
elif Y == 3:
    print("A forma de pagamento escolhida é 2x no cartão, o valor a ser pago será de R${}".format(Z))
    print("Sem desconto")
elif Y == 4:
    print("A forma de pagamento escolhida é 3x ou mais no cartão, o valro a ser pago será de R${}".format(c3))
    print("Pagamento com juros de 20%")