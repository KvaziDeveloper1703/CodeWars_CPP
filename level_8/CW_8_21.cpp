/*
Create a function finalGrade that calculates the final grade of a student based on two parameters: the grade for the exam and the number of completed projects.
This function should take two arguments:
+ exam — grade for the exam (from 0 to 100);
+ projects — number of completed projects (0 and above).

The function should return a number (final grade). There are four possible types of final grades:
+ 100, if the exam grade is greater than 90 or if the number of completed projects is greater than 10;
+ 90, if the exam grade is greater than 75 and the number of completed projects is at least 5;
+ 75, if the exam grade is greater than 50 and the number of completed projects is at least 2;
+ 0 in all other cases.

Создайте функцию finalGrade, которая вычисляет финальную оценку студента в зависимости от двух параметров: оценки за экзамен и числа выполненных проектов.
Эта функция должна принимать два аргумента:
+ exam — оценка за экзамен (от 0 до 100);
+ projects — количество выполненных проектов (от 0 и выше).

Функция должна возвращать число (финальную оценку). Существуют четыре возможных типа финальных оценок:
+ 100, если оценка за экзамен больше 90 или если количество выполненных проектов больше 10;
+ 90, если оценка за экзамен больше 75 и количество выполненных проектов не меньше 5;
+ 75, если оценка за экзамен больше 50 и количество выполненных проектов не меньше 2;
+ 0 в остальных случаях.

https://www.codewars.com/kata/5ad0d8356165e63c140014d4/
*/

int final_grade(int exam, int projects) {
    if (exam > 90 || projects > 10) {
        return 100;
    } else if (exam > 75 && projects >= 5) {
        return 90;
    } else if (exam > 50 && projects >= 2) {
        return 75;
    } else {
        return 0;
    }
}