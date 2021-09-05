def dobro(num=0, formatado=False):
    """
    :param num: valor digitado
    :return: Retorno do dobro do valor num
    """
    dobro = num * 2
    if formatado:
        return moeda(dobro)
    else:
        return dobro


def metade(num=0, formatado=False):
    """
    :param num: Valor digitado
    :return: Retorna a metade do valor num
    """
    metade = num/2
    return metade if formatado == False else moeda(metade)


def diminuir(num=0, por=0, formato=False):
    """
    :param num: Valor digitado
    :param por: Porcentagem para ser subtraida
    :return: Retorna dimi como resultado de uma regra de 3 entre num e por
    """
    x = (num * por)/100
    dimi = num-x
    return dimi if formato == False else moeda(dimi)


def aumentar(num=0, por=0, formato=False ):
    """
    :param num: Valor digitado
    :param por: Porcentagem para ser adicionada
    :return: retorna aum como resultado de um regra de 3 entre num e por
    """
    res = ((num * por)/100) + num
    return res if formato is False else moeda(res)


def moeda(preco=0, moeda='R$'):
    return f"{moeda}{preco:.2f}".replace('.', ',')

r = dobro(1, True)
print(r)