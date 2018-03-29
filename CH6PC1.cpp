/* Craig Laughrin
 Programming Challenge Id (Chapter 6 Challenge 1)
 Markup programming challenge
*/

// headers
#include<iostream>
#include<iomanip>

using namespace std;
// calculatedRetail function prototype
double calculatedRetail (double cost, double markUp);

int main()
{
	double retail, cost, markUp;	// Set variables to double.

	cout << fixed << showpoint << setprecision(2);	// Format retail price.

	cout << "Enter the wholesale cost for the item: $";
	cin >> cost;
	// Validate the cost price.
	while (cost < 0)
	{
		cout << "Please enter a positive number. $" << endl;
		cin >> cost;
	}

	cout << "Now please enter its markup percentage: ";
	cin >> markUp;
	// Validate the markup percentage.	
	while (markUp < 0)
	{
		cout << "Please enter a positive number for markup: ";
		cin >> markUp;
	}
	// Convert markup percentage to two decimal point.
	markUp = (markUp / 100);

	/*Call calculatedRetail fuction to calculate retail price*/

	cout << "The retail price for the item is: " << endl;
	cout << "$ " << calculatedRetail(cost, markUp) << endl;

	return 0;
	}
		double calculatedRetail (double cost, double markUp)
	{
	return (cost * markUp) + cost; // Calculate retail price and return value to main fuction.
}