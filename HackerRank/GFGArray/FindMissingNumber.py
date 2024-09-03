# Given an array arr[] of size N-1 with integers in the range of [1, N],
# the task is to find the missing number from the first N integers.
# Note: There are no duplicates in the list.
# Input: arr[] = {1, 2, 4, 6, 3, 7, 8} , N = 8       Output: 5
# Input: arr[] = {1, 2, 3, 5}, N = 5                 Output: 4

# BigO = NLogN
def find_missing_number(nums):
    sorted_arr = sorted(nums)

    if not nums or len(nums) == 1:
        return []

    for i in range(len(sorted_arr) - 1):

        if sorted_arr[i] + 1 != sorted_arr[i + 1]:
            return sorted_arr[i] + 1

    return []


if __name__ == '__main__':
    nums = [1, 5, 6, 2, 7, 4]

    print(find_missing_number(nums))
