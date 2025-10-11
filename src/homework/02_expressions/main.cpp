//write include statements
#include <iostream>
#include "hwexpressions.h"

int main() {
    double meal_amount, tip_rate, sales_tax, tip, total;

    std::cout << "Enter the meal amount: ";
    std::cin >> meal_amount;

    std::cout << "Enter the tip percentage (as a whole number): ";
    std::cin >> tip_rate;

    sales_tax = get_sales_tax_amount(meal_amount);

    tip = get_tip_amount(meal_amount, tip_rate);

    total = meal_amount + sales_tax + tip;

	// Display the results
    std::cout << "\nReceipt:\n";
    std::cout << "Meal Amount:      " << meal_amount << "\n";
    std::cout << "Sales Tax:        " << sales_tax << "\n";
    std::cout << "Tip Amount:       " << tip << "\n";
    std::cout << "Total:            " << total << "\n";

    return 0;
}
