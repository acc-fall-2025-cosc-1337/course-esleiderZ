//write include statements

//write using statements

#include <iostream>
#include "repetition.h"
using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\nHomework 4 Menu\n";
        cout << "1 - Factorial\n";
        cout << "2 - Sum odd numbers\n";
        cout << "3 - Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1)
        {
            int num;
            do
            {
                cout << "Enter a number (1-9): ";
                cin >> num;
            } while(num <= 0 || num >= 10);

            cout << "Factorial of " << num << " is " << get_factorial(num) << "\n";
        }
        else if(choice == 2)
        {
            int num;
            do
            {
                cout << "Enter a number (1-99): ";
                cin >> num;
            } while(num <= 0 || num >= 100);

            cout << "Sum of squares up to " << num << " is " << sum_of_squares(num) << "\n";
        }
        else if(choice == 3)
        {
            cout << "Exiting program...\n";
        }
        else
        {
            cout << "Invalid choice. Try again.\n";
        }

    } while(choice != 3);

    return 0;
}