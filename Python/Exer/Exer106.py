def cabeca():
    print("\033[45m-=\033[m"*20)
    print("\033[45m/         Ajuda sem programação        /\033[m")
    print("\033[45m-=\033[m"*20)

def barra(txt):
    print("\033[44m            Carregando dados            \033[m")
    return(txt)

def ajudar(msg):
    help(msg)


#Programa Principal
resposta = 0
while resposta != 'FIM':
    cabeca()
    resposta = barra(str(input("\033[42mDigite para receber ajuda: \033[m")))
    ajudar(resposta)
print("\033[41mTenha um bom dia\033[m")
