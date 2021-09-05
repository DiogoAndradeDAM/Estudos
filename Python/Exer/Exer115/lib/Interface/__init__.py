def leiaint(txt):
    while True:
        try:
            num = int(input(txt))
        except:
            print(f"\033[0;31mNúmero digitado invalido\033[m")
        else:
            break
    return num


def linha(tam=42):
    return "-"*tam


def cabecalho(txt):
    print(linha())
    print(txt.center(42))
    print(linha())


def menu(lista):
    cabecalho("menu principal")
    c = 1
    for item in lista:
        print(f"\033[33m{c}\033[m - \033[34m{item}\033[m")
        c += 1
    print(linha())
    opc = leiaint('Sua opção: ')
    return opc