# ls mv mv cp mv !1 (ls) !6 (!1 -> ls)
# guardar o resulltado de !1 melhora o tempo de execucao
# devolve frequencia de [cp, ls, mv]
def find_command(command, commands):

    while command not in ['cp', 'ls', 'mv']:
        index = int(command[1:])
        command = commands[index]

    return command


def systemReader(commands):

    result = [0,0,0]

    for command in commands:
        if '!' in command:
            find_command(command, commands)
        if command == 'cp':
            result[0] += 1
        if command == 'ls':
            result[1] += 1
        if command == 'mv':
            result[2] += 1

    return result