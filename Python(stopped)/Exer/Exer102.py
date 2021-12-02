def fatorial(num, show=False):
    """
    :param num: Número base do fatorial
    :param show: mostrar calculo
    :return: verdadeiro
    """
    fat = 1
    if show == True:
        print(f"{num}!:", end=' ')
    for c in range(num, 0, -1):
        fat *= c
        if show == True:
            print(c, end=' - ')
    if show == True:
        print(f"= {fat}")
    return fat

r1 = fatorial(4, show=True)
print(r1)
