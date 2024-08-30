# Dado um array, encontre o elemento que mais se repete
# Se multiplos elementos aparecem igualmente, retorne qualquer um deles
#
# EDGGE CASES
# [] -> -1
# [2,2,3,3] -> 2 ou 3
# [2,2,2,3,3] -> 2

# BigO N
def findFrequentNumber(numbers):

    if not numbers:
        return -1

    frequence = {}

    for number in numbers:
        frequence[number] = frequence.get(number, 0) + 1

    most_frequent = max(frequence, key=frequence.get)

    return most_frequent

if __name__ == '__main__':
    print(findFrequentNumber([3,3,3,1,1,2,2]))