# DESAFIO 4
# Crie um programa que solicita ao usuário que insira um número inteiro 
# positivo e, em seguida, calcula e exibe o fatorial desse número.
# (O fatorial de um número é o produto de todos os números inteiros 
# positivos de 1 até o próprio número.)

n = int(input("Enter one number: "))
factorial = 1

while n > 1:
    factorial = factorial * n
    n -= 1
    
print(factorial)
#TODO recursive