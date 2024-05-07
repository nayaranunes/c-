#DESAFIO 2
# Crie um programa que solicita ao usuário que insira um número inteiro e, 
# em seguida, verifica se o número é par ou ímpar.
# O programa deve exibir uma mensagem indicando se o número é par ou ímpar.

num = int(input("Enter one number: "))
if num % 2 == 0:
    print("Par")
else:
    print("Impar")