tabela = ('Palmeiras', 'Atlético-MG', 'Fortaleza', 'Bragantino', 'Athletico-PR', 'Flamengo', 'Ceará SC', 'Bahia', 'Fluminense', 'Santos', 'Atlético-GO', 'Corinthians', 'Internacional', 'Juventude', 'Cuiabá', 'São Paulo', 'Sport', 'América-MG', 'Grêmio', 'Chapecoense')
print("Esses são os 5 primeiros colocados do campeonato brasileiro 2021 ", tabela[0:6])
print("Esses são os 4 ultimos colocados do campeonato brasileiro ", tabela[16:21])
print("Tabela do campeonato brasileiro de futebol em ordem alfábetica")
print(sorted(tabela))
cha = tabela.index('Chapecoense')
print(f"{cha+1} lugar")