# Given a time in -hour AM/PM format, convert it to military (24-hour) time.
# Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
# - 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.
# Example s = '12:01:00PM Return '12:01:00'.
# Example s = '12:01:00AM Return '00:01:00'.

import os

def timeConversion(s):
    time = s[:-2]
    time = time[2:]
    ampm = s[-2]
    hour = s[:2]
    hora = int(hour)
    if ampm == 'A':
        if hora != 12:
           return (s[:-2])
        else:
            hour = '00'
            return (hour + time)
    if ampm == 'P':
        if hora != 12:
            hora = hora + 12
        hour = str(hora)
        return (hour+time)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    fptr.write(result + '\n')

    fptr.close()