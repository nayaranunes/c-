# Write a program to print all the Leaders in the array.
# An element is a Leader if it is greater than all the elements to its right side.
# Input: arr[] = {16, 17, 4, 3, 5, 2}   Output: 17 5 2
# 17 is greater than all the elements to its right: 4, 3, 5 and 2, therefore 17 is a leader.
# 5 is greater than all the elements to its right: 2, therefore 5 is a leader.
# 2 has no element to its right, therefore 2 is a leader.

def leaders_big_o_n(nums):
    leaders = []
    maxi = nums[-1]
    leaders.append(maxi)

    n = len(nums) - 1
    while n >= 0:
        if nums[n] > maxi:
            maxi = nums[n]
            leaders.append(maxi)
        n -= 1

    return leaders


def leaders_big_o_nxn(nums):

    leaders = []
    n = len(nums)

    for i in range(n - 1):
        count = 1
        j = i + 1
        while nums[i] > nums[j] and j < n - 1:
            count += 1
            j += 1

        if count == n - (i + 1):
            leaders.append(nums[i])

        i += 1

    leaders.append(nums[-1])
    return leaders


if __name__ == '__main__':
    nums = [16, 17, 4, 3, 5, 2]
    nums2 = [100, 26, 3, 4, 5, 90, 2]

    print(leaders_big_o_nxn(nums))
    print(leaders_big_o_n(nums))
