# Given an array that contains both positive and negative integers,
# the task is to find the product of the maximum product subarray.
# Input: arr[] = {6, -3, -10, 0, 2}       Output:  180
# Input: arr[] = {-1, -3, -10, 0, 60}     Output:   60


def max_sub_array(nums):

    sub_arr = []
    current_product = 0
    max_product = 0

    for i in range(len(nums)):

        current_product = nums[i] * nums[i+1]
        next_product = current_product * nums[i+2]

        if current_product > next_product:
            max_product = current_product
            sub_arr.append(nums[i])
            sub_arr.append(nums[i+1])

    return sub_arr



if __name__ == '__main__':
    nums = [6, -3, -10, 0, 2]

    print(max_sub_array(nums))
