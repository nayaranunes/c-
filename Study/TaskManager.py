# DESAFIO 5
# Crie um programa que permita ao usuário gerenciar suas tarefas diárias. 
# O programa deve oferecer as seguintes funcionalidades:
# Adicionar uma nova tarefa;
# Visualizar todas as tarefas;
# Marcar uma tarefa como concluída;
# Remover uma tarefa;
# Sair do programa.

print("Programa iniciado")

message = "Digite 1 para adicionar uma nova tarefa \nDigite 2 para visualizar todas as tarefas \nDigite 3 para marcar uma tarefa como concluída \nDigite 4 para remover uma tarefa \nDigite 5 para sair do programa\n"
option = int(input(message))
tasks = {}
tasks_done = {}
i = 1

while option != 5:

    if option == 1:
        task = str(input("Digite a tarefa: "))
        tasks[i] = task
        i += 1
    if option == 2:
        print("Lista de tarefas: ")
        print(tasks)
        print("Lista de tarefas concluidas: ")
        print(tasks_done)
    if option == 3:
        print(tasks)
        key = int(input("Digite o numero da tarefa a ser concluida: "))
        tasks_done[key] = tasks.get(key)
        tasks.pop(key)
    if option == 4:
        print(tasks)
        key = int(input("Digite o numero da tarefa a ser removida: "))
        tasks.pop(key)

    option = int(input(message))

print("Programa finalizado")