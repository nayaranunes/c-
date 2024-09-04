# Given an array of integers, where all elements but one occur twice, find the unique element.
# Example a = [1,2,3,4,3,2,1]
# The unique element is 4

def lonely_integer(a):

    freq = {}

    for i in range(len(a)):

        freq[a[i]] = freq.get(a[i], 0) + 1

    return min(freq, key=freq.get)


if __name__ == '__main__':

    print(lonely_integer([1, 2, 3, 4, 3, 2, 1]))
