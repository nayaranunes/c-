# Find the number which is in the median position
# n = 7 (n is odd)
# 0 3 2 4 5 6 1

def encontrar_numero_do_meio(arr):
    # Ordenar o array
    arr_ordenado = sorted(arr)

    # Encontrar o índice do meio
    meio = len(arr_ordenado) // 2

    # Retornar o elemento do meio
    return arr_ordenado[meio]
