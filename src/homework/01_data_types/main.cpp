//write include statements
#include <iostream>

using std::cout;

int multiply_numbers(int num1, int num2)
{
    return num1 * num2;
}

int main()
{
    int result1 = multiply_numbers(7, 7);
    cout << "7 x 7 = " << result1 << "\n";

    int result2 = multiply_numbers(5, 5);
    cout << "5 x 5 = " << result2 << "\n";

    return 0;
}
