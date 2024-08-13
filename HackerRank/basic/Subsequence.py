#BigO = n
def isSubsequence(s, t):
    s_aux = 0
    t_aux = 0

    while s_aux < len(s) and t_aux < len(t):
        if s[s_aux] == t[t_aux]:
            s_aux += 1
        t_aux += 1
    return s_aux == len(s)

# BigO = nˆ2
def isSubsequence2(s, t):
    aux = ''
    for i in range(len(s)):
        for j in range(len(t)):
            if s[i] == t[j]:
                aux = aux + s[i]
                j += 1
        i += 1
    return aux == s

if __name__ == '__main__':
    s = 'bde'
    t = 'abcde'
    result = isSubsequence(s, t)
    print(result)
    result = isSubsequence2(s, t)
    print(result)
