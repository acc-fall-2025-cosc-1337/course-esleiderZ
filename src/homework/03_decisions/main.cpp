//write include statements

#include <iostream>
#include "decisions.h"

int main()
{
    int choice, grade;

    std::cout << "MAIN MENU\n"
              << "1 - Letter grade using if\n"
              << "2 - Letter grade using switch\n"
              << "3 - Exit\n"
              << "Enter your choice: ";
    std::cin >> choice;

    if (choice == 1)
    {
        std::cout << "Enter a grade (0-100): ";
        std::cin >> grade;

        if (grade >= 0 && grade <= 100)
            std::cout << "Letter grade: " << get_letter_grade_using_if(grade) << "\n";
        else
            std::cout << "Error: Grade is out of range.\n";
    }
    else if (choice == 2)
    {
        std::cout << "Enter a grade (0-100): ";
        std::cin >> grade;

        if (grade >= 0 && grade <= 100)
            std::cout << "Letter grade: " << get_letter_grade_using_switch(grade) << "\n";
        else
            std::cout << "Error: Grade is out of range.\n";
    }
    else if (choice == 3)
    {
        std::cout << "Exiting program.\n";
    }
    else
    {
        std::cout << "Invalid menu choice.\n";
    }

    return 0;
}