//write include statements
#include <iostream>
#include "hwexpressions.h"

int main() {
    double meal_amount, tip_rate, sales_tax, tip, total;

    std::cout << "Enter the meal amount: ";
    std::cin >> meal_amount;

    std::cout << "Enter the tip percentage (as a whole number): ";
    std::cin >> tip_rate;
#include <iomanip>
#include "hwexpressions.h"

//write namespace using statement for cout
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
	double meal_amount;
	double tip_rate;
	
	// Prompt for meal amount
	cout << "Enter meal amount (decimal format, e.g., 20.50): $";
	cin >> meal_amount;
	
	// Prompt for tip rate
	cout << "Enter tip rate as decimal (e.g., 0.15 for 15%, 0.20 for 20%): ";
	cin >> tip_rate;
	
	// Calculate sales tax and tip
	double sales_tax = get_sales_tax_amount(meal_amount);
	double tip_amount = get_tip_amount(meal_amount, tip_rate);
	double total = meal_amount + sales_tax + tip_amount;
	
	// Display formatted receipt
	cout << endl << "Receipt:" << endl;
	cout << fixed << setprecision(2);
	cout << "Meal Amount:      $" << meal_amount << endl;
	cout << "Sales Tax:        $" << sales_tax << endl;
	cout << "Tip Amount:       $" << tip_amount << endl;
	cout << "Total:            $" << total << endl;

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
