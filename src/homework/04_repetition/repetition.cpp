//add include statements

//add function(s) code here
#include "repetition.h"

int get_factorial(int num)
{
    int factorial = 1;
    for(int i = 1; i <= num; ++i)
    {
        factorial *= i;
    }
    return factorial;
}

int sum_of_squares(int num)
{
    int sum = 0;
    int i = 1;
    while(i <= num)
    {
        sum += i * i;
        i++;
    }
    return sum;
}