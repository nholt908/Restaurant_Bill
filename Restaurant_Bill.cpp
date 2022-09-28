// Your Name: Nicole Holt
// Date: 08/26/2022
// Program Title: RestaurantBill
// Program Description: This program calculates the total food bill with tip and tax

#include <iostream>
#include <string>

// hello

using namespace std;

// Named constants

const double TAX_PERCENT = 0.095;

int main()
{

	// Variable declaration

	double food_bill;
	double tip;
	double tax;
	double total_bill;

	//Program title and description for the user

	cout << "Program Title: RestaurantBill" << endl;
	cout << "Program Description: This program calculates the total food bill with tip and tax" << endl;
	cout << endl;

	// User input

	cout << "What is your food bill? (excluding the tax and tip)" << endl;
	cin >> food_bill;
	cout << endl;

	cout << "Choose your tip: " << endl;

	cout << "For 10% tip: $" << 0.1 * food_bill << endl;
	cout << "For 15% tip: $" << 0.15 * food_bill << endl;
	cout << "For 20% tip: $" << 0.2 * food_bill << endl;

	cin >> tip;
	cout << endl;

	// Calculations

	tax = food_bill * TAX_PERCENT;
	total_bill = food_bill + tip + tax;

	// Output to the screen

	cout << "Your food bill is  $" << food_bill << endl;
	cout << "Tip...             $" << tip << endl;
	cout << "Tax...             $" << tax << endl;
	cout << "Your total bill is $" << total_bill << endl;
	cout << endl;
	cout << "Thank you!" << endl;

	return 0;
}