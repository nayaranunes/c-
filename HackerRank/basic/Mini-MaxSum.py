# Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers.
# Then print the respective minimum and maximum values as a single line of two space-separated long integers.
# Example [1,3,5,7,9]
# The minimum sum is  and the maximum sum is . The function prints
# 16 24

import math
import os
import random
import re
import sys

# Complexity N -> run all elements of array
def miniMaxSumFirstApproach(arr):
    maximum = 0
    minimum = arr[0]
    soma = 0

    for i in arr:
        soma = soma + i
        if i > maximum:
            maximum = i
        if i < minimum:
            minimum = i

    print(soma - maximum, soma - minimum)


if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    miniMaxSumFirstApproach(arr)
