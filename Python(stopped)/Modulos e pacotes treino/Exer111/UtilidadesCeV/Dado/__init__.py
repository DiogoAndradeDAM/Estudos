def leiaDinheiro(num):
    while True:
        di = str(input(num)).replace(',', '.')
        if di.isalpha() or di.strip() == '':
            print(f"\033[31mVocê digitou algo que não é um valor, digite novamente \033[m")
        else:
            din = float(di)
            break
    return din


