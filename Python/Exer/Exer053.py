frase = str(input("Digite uma frase: "))

#Mudança de string
div1 = frase.strip().lower().split()
div = ''.join(div1)
quan = len(div)
true = 'a' in div

#Analisador de 'a'
if true == True:
    for a in range(1, quan +1):
        a1 = div.find('a')
        a2 = div.rfind('a')
        ca = a2 - a1




