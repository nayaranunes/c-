# Given a time in -hour AM/PM format, convert it to military (24-hour) time.
# Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
# - 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.
# Example s = '12:01:00PM Return '12:01:00'.
# Example s = '12:01:00AM Return '00:01:00'.

import os


def am(s):
    if s[:2] != '12':
        return s[:-2]
    else:
        return '00' + s[2:-2]


def pm():
    hour = s[:2]
    if hour != '12':
        hour = int(hour) + 12
        return str(hour) + s[2:-2]
    else:
        return s[:-2]

def timeConversion(s):
    # penultimo caracter [-2]
    if s[-2] == 'A':
        return am(s)
    if s[-2] == 'P':
        return pm()


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    fptr.write(result + '\n')

    fptr.close()
