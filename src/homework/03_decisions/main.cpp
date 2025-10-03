//write include statements
#include <iostream>
#include <string>
#include "decisions.h"

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
using std::cin;
using std::cout;
using std::endl;

int main()
{
	cout << "MAIN MENU" << endl << endl;
	cout << "1-Letter grade using if" << endl;
	cout << "2-Letter grade using switch" << endl;
	cout << "3-Exit" << endl << endl;
	cout << "Enter your choice: ";

	int choice;
	cin >> choice;

	if (choice == 1 || choice == 2)
	{
		cout << "Enter numerical grade (0-100): ";
		int numerical_grade;
		cin >> numerical_grade;

		if (numerical_grade >= 0 && numerical_grade <= 100)
		{
			std::string letter_grade = (choice == 1)
				                           ? get_letter_grade_using_if(numerical_grade)
				                           : get_letter_grade_using_switch(numerical_grade);
			cout << "Letter grade: " << letter_grade << endl;
		}
		else
		{
			cout << "Number out of range" << endl;
		}
	}
	else if (choice == 3)
	{
		cout << "Exiting program." << endl;
	}
	else
	{
		cout << "Invalid option." << endl;
	}

	return 0;
}