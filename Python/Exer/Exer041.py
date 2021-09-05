a = float(input("Lado a do triângulo"))
b = float(input("Lado b do triângulo"))
c = float(input("Lado c do triângulo"))

# Qual triangulo é
if a == b and c == b and a <= b+c and b <= a+c and c <= a+b:
    print("Triângulo Equilátero")
elif a == b and c != a and a <= b+c and b <= a+c and c <= a+b or a != b and c == b and a <= b+c and b <= a+c and c <= a+b or a != b and c == a and a <= b+c and b <= a+c and c <= a+b:
    print("Triângulo Isóseles")
elif a != b and a != c and b != c and a <= b+c and b <= a+c and c <= a+b:
    print("Triângulo Escaleno")
else:
    print("Não é um triângulo")
