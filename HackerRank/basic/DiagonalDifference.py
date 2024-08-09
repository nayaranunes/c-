# Given a square matrix, calculate the absolute difference between the sums of its diagonals.
# For example, the square matrix  is shown below:
# 1 2 3
# 4 5 6
# 9 8 9
# The left-to-right diagonal = 1 + 5 + 9 = 15
# The right to left diagonal = 3 + 5 + 9 = 17
# Their absolute difference is |15 - 17| = 2

import os


def diagonalDifference(arr):
    n = len(arr)

    left = 0
    right = 0
    j = 0
    k = n - 1
    for i in range(n):
        left = left + arr[i][j]
        right = right + arr[i][k]
        k -= 1
        j += 1
    return abs(left - right)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
