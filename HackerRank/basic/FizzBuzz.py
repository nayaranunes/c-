def fizzBuzz(n):
    i = 1
    fizz = 3
    buzz = 5

    while i <= n:
        out = ''
        if i == fizz:
            out = 'Fizz'
            fizz += 3
        if i == buzz:
            out = out + 'Buzz'
            buzz += 5
        if out == '':
            print(i)
        else:
            print(out)
        i += 1


if __name__ == '__main__':
    n = int(input().strip())

    fizzBuzz(n)