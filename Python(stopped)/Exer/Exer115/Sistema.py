from Exer115.lib.Interface import *
from Exer115.lib.Arquivo import *
from time import sleep


arq = 'cursoemvideo.txt'

if not arquivoExiste(arq):
    criarArquivo(arq)

while True:
    resposta = menu(['Ver pessoas cadastradas', 'Cadastrar uma pessoa', 'Sair do programa'])
    if resposta == 1:
        # Opção de listar o conteudo de um arquivo
        lerArquivo(arq)
    elif resposta == 2:
        # Opção de cadastrar uma nova pessoa
        cabecalho("Novo Cadastro")
        nome = str(input("Nome: ")).strip()
        idade = leiaint("Idade: ")
        cadastrar(arq, nome, idade)
    elif resposta == 3:
        print("Encerrando programa...")
        break
    else:
        print("Erro! opção desconhecida")
    sleep(2)
