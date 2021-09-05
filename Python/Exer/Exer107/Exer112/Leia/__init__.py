def leiaint(txt):
    while True:
        try:
            num = int(input(txt))
        except:
            print(f"\033[0;31mO valor digitado é invalido digite novamente\033[m")
        else:
            break
    return num


def leiafloat(txt):
    while True:
        try:
            num = float(input(txt))
        except:
            print(f"\033[0;31mO valor digitado é invalido, digite novamente\033[m")
        else:
            break
    return num

