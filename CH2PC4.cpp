/* Craig Laughrin
 Programming Challenge Id (Chapter 2 Challenge 4)
 Calculating a restaurant bill
*/

#include <iostream>

using namespace std;

int main()
{
	// Create and set variables
	double mealCharge = 44.50, // Meal charge variable
	Tax = .0675, // Tax variable
	Tip = .15, // Tip variable
	mealTax, // Placeholder for calculating the tax
	mealTaxTip, // Placeholder for calculating the tip
	mealTotal; // Placeholder for calculating the Total Bill
	
	// Calculations for the above marked placeholders
	mealTax = mealCharge * Tax;
	mealTaxTip = (mealCharge + mealTax) * Tip;
	mealTotal = mealCharge + mealTax + mealTaxTip;

	//Outputs displayed on the screen for the user
	cout << "Cost of Meal" << endl; // Shows purpose
	cout << "Meal Charge: $" << mealCharge << endl; // Displays cost of meal
	cout << "Tax: $" << mealTax << endl; // Displays the tax charged
	cout << "Tip: $" << mealTaxTip << endl; // Displays the tip charged
	cout << "Total: $" << mealTotal << endl; // Displays the total of all charges

	return 0;
}