tupla = ('barricada', 'centro', 'homem', 'mulher', 'ilha', 'cereal')

tuplatam = len(tupla)
for c in range(0, tuplatam):
    a = tupla[c].count('a')
    e = tupla[c].count('e')
    i = tupla[c].count('i')
    o = tupla[c].count('o')
    u = tupla[c].count('u')
    print(tupla[c], "A =", a,"/", "E =", e,"/", "I =", i,"/", "O =", o,"/", "U =", u, )

