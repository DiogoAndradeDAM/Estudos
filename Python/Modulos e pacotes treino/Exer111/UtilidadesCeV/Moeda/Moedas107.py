def dobro(num=0):
    """
    :param num: valor digitado
    :return: Retorno do dobro do valor num
    """
    dobro = num * 2
    return dobro


def metade(num=0):
    """
    :param num: Valor digitado
    :return: Retorna a metade do valor num
    """
    metade = num/2
    return metade


def diminuir(num=0, por=0):
    """
    :param num: Valor digitado
    :param por: Porcentagem para ser subtraida
    :return: Retorna dimi como resultado de uma regra de 3 entre num e por
    """
    x = (num * por)/100
    dimi = num-x
    return dimi


def aumentar(num=0, por=0):
    """
    :param num: Valor digitado
    :param por: Porcentagem para ser adicionada
    :return: retorna aum como resultado de um regra de 3 entre num e por
    """
    x = (num * por)/100
    aum = num + x
    return aum

def moedas(num):
    moe = num.isf

r = float(input("Digite: "))
print(r)
