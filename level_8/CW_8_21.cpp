/*
Write a function final_grade that returns the final grade based on the exam score and the number of completed projects.
+ Grade is 100 if exam > 90 OR projects > 10;
+ Grade is 90 if exam > 75 AND projects >= 5;
+ Grade is 75 if exam > 50 AND projects >= 2;
+ Otherwise, grade is 0.

Напишите функцию final_grade, возвращающую итоговую оценку по баллу за экзамен и количеству проектов.
+ Оценка 100, если exam > 90 ИЛИ projects > 10;
+ Оценка 90, если exam > 75 И projects >= 5;
+ Оценка 75, если exam > 50 И projects >= 2;
+ Иначе оценка 0.

https://www.codewars.com/kata/5ad0d8356165e63c140014d4/
*/

#include <iostream>

int final_grade(int given_exam_result, int given_number_of_projects) {
    if (given_exam_result > 90 || given_number_of_projects > 10) {
        return 100;
    } else if (given_exam_result > 75 && given_number_of_projects >= 5) {
        return 90;
    } else if (given_exam_result > 50 && given_number_of_projects >= 2) {
        return 75;
    } else {
        return 0;
    }
}

int main() {
    std::cout << "Exam: 100, Projects: 0 -> Final Grade: " << final_grade(100, 0) << std::endl;
    std::cout << "Exam: 85, Projects: 5 -> Final Grade: " << final_grade(85, 5) << std::endl;
    std::cout << "Exam: 70, Projects: 2 -> Final Grade: " << final_grade(70, 2) << std::endl;
    std::cout << "Exam: 95, Projects: 2 -> Final Grade: " << final_grade(95, 2) << std::endl;
    std::cout << "Exam: 60, Projects: 3 -> Final Grade: " << final_grade(60, 3) << std::endl;
    return 0;
}