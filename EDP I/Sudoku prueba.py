import numpy as np

p = 5
l = 4

arreglo = np.arange(1, 10)

arr_fila = np.empty(9, dtype=int)
print(arr_fila)

arr_columna = np.empty(9, dtype=int)
print(arr_columna)

arr_aux = np.empty(9, dtype=int)
print(arr_aux)

M = np.array([[1, 0, 6, 0, 0, 2, 3, 0, 0],
              [0, 5, 0, 0, 0, 6, 0, 9, 1],
              [0, 0, 9, 5, 0, 1, 4, 6, 2],
              [0, 3, 7, 9, 0, 5, 0, 0, 0],
              [5, 8, 1, 0, 2, 7, 9, 0, 0],
              [0, 0, 0, 4, 0, 8, 1, 5, 7],
              [0, 0, 0, 2, 6, 0, 5, 4, 0],
              [0, 0, 4, 1, 5, 0, 6, 9, 0],
              [9, 0, 0, 8, 7, 4, 2, 1, 0]], dtype=int)

# Dividir las filas en 3 partes iguales
filas = np.split(M, 3)

# Dividir cada parte en 3 partes iguales
arreglo_matrices = np.array([np.split(fila, 3, axis=1) for fila in filas])

print(arreglo_matrices)
print(arreglo_matrices[0,0,0,0])

# Otra manera 
for i in range(3):
    for j in range(3):
        matriz = M[i*3:(i+1)*3, j*3:(j+1)*3]
        print(f"Matriz {i*3+j+1}:\n{matriz}\n")

for i in range(9):
    for j in range(9):
        if i == p and j == l and M[i, j] == 0:
            for k in range(9):
                arr_fila[k] = M[p,k]  
                arr_columna[k] = M[k,l]

k = 0

# Busco en cual de las 9 matrices se encuentra la posicion:

if p < 3 and l < 3: 
    for i in range(3):
        for j in range(3):
            arr_aux[k] = arreglo_matrices[0, 0, i, j]
            k += 1
elif p < 3 and l >= 3 and l < 6: 
    for i in range(3):
        for j in range(3):
            arr_aux[k] = arreglo_matrices[0, 1, i, j]
            k += 1
elif p < 3 and l >= 6 and l < 9: 
    for i in range(3):
        for j in range(3):
            arr_aux[k] = arreglo_matrices[0, 2, i, j]
            k += 1                                              # Busco por la primera fila, en las tres primeras matrices
elif p >= 3 and p < 6 and l < 3: 
    for i in range(3):
        for j in range(3):
            arr_aux[k] = arreglo_matrices[1, 0, i, j]
            k += 1
elif p >= 3 and p < 6 and l >= 3 and l < 6: 
    for i in range(3):
        for j in range(3):
            arr_aux[k] = arreglo_matrices[1, 1, i, j]
            k += 1
elif p >= 3 and p < 6 and l >= 6 and l < 9: 
    for i in range(3):
        for j in range(3):
            arr_aux[k] = arreglo_matrices[1, 2, i, j]
            k += 1                                              # Busco por la segunda fila, en las tres segundas matrices
elif p >= 6 and p < 9 and l < 3: 
    for i in range(3):
        for j in range(3):
            arr_aux[k] = arreglo_matrices[0, 2, i, j]
            k += 1
elif p >= 6 and p < 9 and l >= 3 and l < 6: 
    for i in range(3):
        for j in range(3):
            arr_aux[k] = arreglo_matrices[1, 2, i, j]
            k += 1
elif p >= 6 and p < 9 and l >= 6 and l < 9: 
    for i in range(3):
        for j in range(3):
            arr_aux[k] = arreglo_matrices[2, 2, i, j]
            k += 1                                              # Busco por la tercera fila, en las tres terceras matrices


            
print("hola", arr_fila)
print("chau", arr_columna)
print("PEPE", arr_aux)

c = np.union1d(arr_fila, arr_columna)
c = np.union1d(c, arr_aux)

print("lulu", c)
print(arreglo)

resultado = np.setdiff1d(arreglo, c)

print("Los posibles números son:", resultado)

print(arreglo_matrices[1, 1, i, j])