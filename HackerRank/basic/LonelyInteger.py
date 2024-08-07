# Given an array of integers, where all elements but one occur twice, find the unique element.
# Example a = [1,2,3,4,3,2,1]
# The unique element is 4

def lonelyinteger(a):
    a_sorted = sorted(a)
    not_lonely = set()
    set_a = set(a_sorted)

    for i in range(len(a_sorted) - 1):
        if a_sorted[i] == a_sorted[i + 1]:
            not_lonely.add(a_sorted[i])

    return list(set_a - not_lonely)[0]

if __name__ == '__main__':

    #TODO read array

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = lonelyinteger(a)