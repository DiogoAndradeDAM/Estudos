Nome = str(input("Digite seu nome "))
analisador = Nome.title().find('Silva')
print("""Se o numero -1 aparecer significa que vc não tem Silva no seu nome
      e caso não aparece você não possui
      Nome digitado""", Nome.capitalize())
print("Silva= ", analisador)