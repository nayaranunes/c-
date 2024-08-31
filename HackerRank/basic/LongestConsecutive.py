from typing import List


def longestConsecutive(self, nums: List[int]) -> int:
    sorted_array = sorted(nums)
    longest_consecutive = 0
    current_consecutive = 1

    if len(sorted_array) == 0: return 0

    if len(sorted_array) == 1: return 1

    for i in range(len(sorted_array) - 1):
        if sorted_array[i] == sorted_array[i + 1]:
            continue
        if sorted_array[i] + 1 == sorted_array[i + 1]:
            current_consecutive += 1
        else:
            if current_consecutive > longest_consecutive:
                longest_consecutive = current_consecutive
            current_consecutive = 1

    # in case all numbers are one sequence, the else will not be executed
    if current_consecutive > longest_consecutive:
        longest_consecutive = current_consecutive

    return longest_consecutive


def longestConsecutiveOn(nums: List[int]) -> int:
    # Cria um conjunto a partir da lista para eliminar duplicatas e permitir busca rápida
    num_set = set(nums)
    longest_consecutive = 0

    # Percorre todos os números no conjunto
    for num in num_set:
        # Se num - 1 não está no conjunto, então 'num' pode ser o início de uma sequência
        if num - 1 not in num_set:
            current_num = num
            current_streak = 1

            # Expande a sequência verificando os próximos números consecutivos
            while current_num + 1 in num_set:
                current_num += 1
                current_streak += 1

            # Atualiza a sequência mais longa encontrada
            longest_consecutive = max(longest_consecutive, current_streak)

    return longest_consecutive