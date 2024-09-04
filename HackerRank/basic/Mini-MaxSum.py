# Given five positive integers, find the minimum and maximum values
# that can be calculated by summing exactly four of the five integers.
# Then print the respective minimum and maximum values as a single line of two space-separated long integers.
# Example [1,3,5,7,9]
# The minimum sum is 16 and the maximum sum is 24

# Complexity N -> run all elements of array
def mini_max_sum_first_approach(arr):
    maximum = 0
    minimum = arr[0]
    soma = 0

    for i in arr:
        soma += i
        maximum = max(i, maximum)
        minimum = min(i, minimum)

    print(soma - maximum, soma - minimum)


if __name__ == '__main__':

    print(mini_max_sum_first_approach([1, 3, 5, 7, 9]))
