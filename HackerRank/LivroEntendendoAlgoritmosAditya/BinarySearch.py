# List must be ordered
def binary_search(nums, item):

    top = len(nums) - 1
    down = 0

    while top >= down:

        middle = top + down // 2
        strike = nums[middle]

        if strike == item:
            return middle
        if strike > item:
            top = middle - 1
        if strike < item:
            down = middle + 1

    return None


if __name__ == '__main__':
    nums = [1, 7, 14, 30, 58, 200]

    print(binary_search(nums, 200))
