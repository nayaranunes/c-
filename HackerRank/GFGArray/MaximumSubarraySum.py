# Given an array arr[] of size N. The task is to find the sum of the contiguous subarray
# within a arr[] with the largest sum.
# Input: arr = {-2,-3,|4,-1,-2,1,5|,-3} Output: 7
# Input: arr = {2}                      Output: 2
# Input: arr = {5,4,1,7,8}              Output: 25

nums = [-2,-3,4,-1,-2,1,5,-3]


def max_sub_array(nums):

    current_sum = 0
    max_sum = 0

    for num in nums:

        current_sum += num

        if current_sum < 0:
            current_sum = 0

        max_sum = max(max_sum, current_sum)

    return max_sum


if __name__ == '__main__':

    print(max_sub_array(nums))
