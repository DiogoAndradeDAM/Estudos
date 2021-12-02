def leiaint(n='', lim=False):
    """
    :param n: Onde será colocado o texto da pergunta
    :param lim: (opcional) Onde será limitado receber valores de apenas 1 digito
    :return: retorna o valor d digitado pelo usuario
    """
    d = int(input(n))
    if lim:
        if d >= 9 or d <= -9:
            while True:
                d = int(input(n))
                if d <= 9 and d >= -9:
                    break

    return d


n = leiaint("Digite um número: ", True)
print(n)