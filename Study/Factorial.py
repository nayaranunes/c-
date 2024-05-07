# DESAFIO 4
# Crie um programa que solicita ao usuário que insira um número inteiro 
# positivo e, em seguida, calcula e exibe o fatorial desse número.
# (O fatorial de um número é o produto de todos os números inteiros 
# positivos de 1 até o próprio número.)

n = int(input("Enter one number: "))
i = 1
factorial = 0

while factorial != n:
    factorial = n * (n-i)
    n += 1

def factorial(int num):

    return n * n-1;