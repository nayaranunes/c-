# Another sorting method, the counting sort, does not require comparison.
# Instead, you create an integer array whose index range covers the entire range of values in your array to sort.
# Each time a value occurs in the original array, you increment the counter at that index.
# At the end, run through your counting array, printing the value of each non-zero valued index that number of times.
# Example arr = [1,1,3,2,1]
# All of the values are in the range [0...3], so create an array of zeros, result = [0,0,0,0].
# The results of each iteration follow:
# i	arr[i]	result
# 0	 1	[0, 1, 0, 0]
# 1	 1	[0, 2, 0, 0]
# 2	 3	[0, 2, 0, 1]
# 3	 2	[0, 2, 1, 1]
# 4	 1	[0, 3, 1, 1]
# The frequency array is [0,3,1,1].
# These values can be used to create the sorted array as well: sorted = [1,1,1,2,3]

# Constraints 100 <= n <= 10ˆ6 && <=0 arr[1] < 100

import os


def countingSort(arr):
    n = len(arr)
    # maximum value of arr[i] is 100
    # creating an array using n can cause runtime errors over n = 10000
    frequency = [0] * 100
    for i in range(n):
        frequency[arr[i]] += 1
    return frequency


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = countingSort(arr)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
