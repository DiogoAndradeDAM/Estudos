dic = {'nome':str(input("Digite o nome do aluno: ")),
'nota':float(input("Digite a nota do aluno: "))
}
if dic['nota'] >= 7:
    dic['situacao'] = 'Aprovado'
else:
    dic['situacao'] = 'Reprovado'
print(f"O aluno {dic['nome']} com a nota {dic['nota']} foi {dic['situacao']}")
