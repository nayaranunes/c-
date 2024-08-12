# Julius Caesar protected his confidential information by encrypting it using a cipher.
# Caesar's cipher shifts each letter by a number of letters.
# If the shift takes you past the end of the alphabet, just rotate back to the front of the alphabet.
# In the case of a rotation by 3, w, x, y and z would map to z, a, b and c.

import os


def caesarCipher(s, k):
    s_list = list(s)
    if k > 26:
        k = k % 26
    for i in range(len(s)):
        code = ord(s[i])
        if (65 <= code <= 90) or (97 <= code <= 122):
            if (code <= 90 and code + k > 90) or (code >= 97 and code + k > 122):
                code = (code + k) - 26
                s_list[i] = str(chr(code))
            else:
                s_list[i] = str(chr(code + k))
    return ''.join(s_list)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    s = input()

    k = int(input().strip())

    result = caesarCipher(s, k)

    fptr.write(result + '\n')

    fptr.close()

