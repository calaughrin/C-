/* Craig Laughrin
 Programming Challenge Id (Chapter 3 Challenge 2)
 Stadium Seating
*/

 #include <iostream>
 #include <iomanip> // Needed for formatting with fixed, showpoint, and setprecision.

 using namespace std;

int main()
{
	// Sets the constant value of the seats.
	const double seatsA = 15,
	seatsB = 12,
	seatsC = 9;

	// Sets the variables for the seats sold by section.
	double totalA,
	totalB,
	totalC,
	totalSales;

	cout << fixed << showpoint << setprecision(2) << endl; // Used to format the outputs
	cout << "Income from todays softball game." << endl;
	cout << "Enter how many tickets were sold for Class A seats: ";
	cin >> totalA; // Gets usr input for seats A.
	totalA *= seatsA; // Multiplies seats sold by seat price.
	cout << "Enter how many tickets were sold for Class B seats: ";
	cin >> totalB; // Gets usr input for seats B.
	totalB *= seatsB; // Multiplies seats sold by seat price.
	cout << "Enter how many tickets were sold for Class C seats: ";
	cin >> totalC; // Gets usr input for seats C.
	totalC *= seatsC; // Multiplies seats sold by seat price.
	totalSales = totalA + totalB + totalC; // Adds totals for each section to find total sales.
	cout << "Total for Class A: $" << totalA << endl << "Total for Class B: $" << totalB << endl << "Total for Class C: $" << totalC << endl; // Displyas the total sales for each section.
	cout << "Total for combined sales: $" << totalSales << endl; // Displyas the total combined sales.

	return 0;
}