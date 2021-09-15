from random import randint, choice

#Funções
def cabecalho(texto):
    print("-"*50)
    print(texto)
    print("-"*50)


def menu(lista):
    for n, c in enumerate(lista):
        print(f"[ {n:^2}]{c:^30}")


#Rolamento de dados
def dados(valor=2, valor_maximo_dado=1, valor_minimo_dado=1, qualidade_dado='bom'):
    resultado = randint(valor)
    if resultado < valor_maximo_dado and resultado < valor_minimo-dado:
        print(f" Você tirou {resultado} no dado e o resultado foi {qualidade_dado}")
#Classes
class dado():
    def __init__(self, valor_dado, resultado,  valor_maximo_dado, valor_minimo_dado, qualidade_dado):
        self.valor_dado = self
        self.resultado = self
        self.valor_maximo_dado = self
        self.valor_minimo_dado = self
        self.qualidade_dado = self

    def resultado_dado(resultado):
        print(f"O valor do dado foi {self.resultado} o resultado foi {self.qualidade_dado}")


#Programa Principal
lista_de_opcoes = ['Moeda','D8', 'D10', 'D12', 'D16', 'D20', 'D100']

#Cabeçalhos
cabecalho("Bem vindo ao programa de rolamento de dados")

cabecalho("Escolha uma das opções a baixo")

menu(lista_de_opcoes)

print()

#Entrada de dados de usuario
while True:
    try:
        usuario = int(input("Digite uma opção: "))
    except:
        print(f"Error! Você digitou uma opção inválida. Digiet novamente")
    else:
        break

#Maquina
if usuario == 0:
    resultado_maquina = choice('Cara', 'Coroa')
    print(f"O valor da moeda foi {resultado_maquina}")


