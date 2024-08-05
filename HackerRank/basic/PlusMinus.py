# Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero.
# Print the decimal value of each fraction on a new line with places after the decimal.
# Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to are acceptable.
# Example
# There are elements, two positive, two negative and one zero. Their ratios are , and . Results are printed as:
# 0.400000
# 0.400000
# 0.200000
# Function Description
# Complete the plusMinus function in the editor below.
# plusMinus has the following parameter(s):
# * int arr[n]: an array of integers
# Print the ratios of positive, negative and zero values in the array. Each value should be printed on a separate line with digits after the decimal. The function should not return a value.


import math
import os
import random
import re
import sys

# Complexity N -> run all elements of array
def plusMinusFirstApproach(arr):
    length = len(arr)
    positive = 0
    negative = 0
    zero = 0
    for i in arr:
        if i > 0:
            positive += 1
        if i < 0:
            negative += 1
        if i == 0:
            zero += 1
    positive = positive / length
    negative = negative / length
    zero = zero / length

    print(f"{positive:.6f}")
    print(f"{negative:.6f}")
    print(f"{zero:.6f}")


if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))
    # The function accepts INTEGER_ARRAY arr as parameter.

    plusMinusFirstApproach(arr)