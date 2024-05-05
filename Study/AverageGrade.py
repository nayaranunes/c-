# GET 3 GRADE FROM USER 0 to 10, CALCULATE THE AVERAGE BETWEEN THE GRADES
# SHOW TO THE USER THE AVERAGE AND THE FINAL RESULT IF >=60 PASSED ELSE NOT PASSED
# Crie um programa que solicita ao usuário que insira três notas (valores de 0 a 10) e, em seguida, calcule e exiba a média dessas notas.
# Além disso, informe ao usuário se ele foi aprovado ou reprovado com base na média das notas, considerando a média mínima de aprovação como 6.
# I thought about 3 solutions for this problem, starting from the most basic:

# FIRST Simply get the 3 values and calculate the average 

grade1 = float(input("Enter first grade: "))
grade2 = float(input("Enter second grade: "))
grade3 = float(input("Enter third grade: "))
average = (grade1+grade2+grade3)/3
print("Average grade:", round(average, 2))

# SECOND What if we needed to read 100 grades? One by one?
# Sum all the values and divide for the number of grades in the end

grades = 0.00
numberOfGrades = 3
for i in range(0, numberOfGrades):
    message = "Enter grade {}: ".format(i+1)
    newGrade = float(input(message))
    grades += newGrade
average = grades/numberOfGrades
print("Average grade:", average)

# THIRD and BEST What if we neede to access each grade?
# Store the grades in an array list and use array operations

grades = []
numberOfGrades = 3
i = 1
while i <= numberOfGrades:
    message = "Enter grade {}: ".format(i)
    grade = float(input(message))
    # important to check if the grades are in the requerid range
    if grade >= 0 and grade <= 10: 
        grades.append(grade)
        i+=1
    else:
        print("Type a grade between 0 and 10")

average = sum(grades)/len(grades)
print("Average grade:", round(average, 2))

if average >= 6:
    print("Passed")
else:
    print("Do not pass")