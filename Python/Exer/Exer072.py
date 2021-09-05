tupla = ('zero', 'um', 'dois', 'três', 'quatro', 'cinco', 'seis', 'sete', 'oito', 'nove', 'dez', 'onze', 'doze', 'treze', 'quatorze', 'quinze', 'dezesseis', 'dezessete', 'dezoito', 'dezenove', 'vinte')
car = 0
while True:
    digi = int(input("Digite um numero entre 0 e 20: "))
    if digi >= 0 and digi <= 20:
        break
print(tupla[digi])
