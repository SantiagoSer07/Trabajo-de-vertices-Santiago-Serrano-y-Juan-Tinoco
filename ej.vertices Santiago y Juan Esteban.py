n = int(input("cuantos vertices quieres añadir: "))

vertices = []

for i in range(n):
    vertices.append(input(f"Ingrese las coordenadas del vértice {i+1}: "))
    
print("Los vértices son:", vertices)

c = int(input("cuantas caras desea: "))
caras = []

print("Ingrese las caras (índices de vértices separados por espacios).")

for i in range(c):
    entrada = input("Cara: ")
    caras.append(entrada)
print("la figura es: ")
print("Vértices:")
for i in range(len(vertices)):
    print(f"v{i}: {vertices[i]}")

print("Caras")
for i in range(len(caras)):
    print(f"cara {i+1}: {caras[i]}")