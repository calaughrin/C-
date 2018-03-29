/* Craig Laughrin
 Programming Challenge Id (Chapter 3 Challenge 21)
 Monthly Payments
*/

 #include <iostream>
 #include <iomanip> // Needed for I/O manipulation.
 #include <cmath> // Need to perform exponential math functions.

 using namespace std;

 int main ()
 {
 	int numPayments; // Sets integer variable.

 	// Sets double variables.
 	double rate,
 	loanAmount,
 	monthlyPayment,
 	amountPaidBack,
 	interestPaid;

 	// Displays outputs asking for user inputs.
 	cout << "This progam will help you determine the details of your loan." << endl;
 	cout << "Enter the annual interest rate without the % sign: ";
 	cin >> rate;
 	rate /= 12 * 100;
 	cout << "Enter the number of monthly payments you would like to make: ";
 	cin >> numPayments;
 	cout << "Enter the amount you would like to borrow for this loan: $";
 	cin >> loanAmount;
 	// Magical equation to find monthly payment information.
 	monthlyPayment = (rate * pow(1+rate, numPayments)) / (pow(1+rate, numPayments) - 1) * loanAmount;
 	// Displays the outputs in as close to a formatted table as I could get them.
 	cout << "Loan Amount:		$" << setw(12) << fixed << showpoint << setprecision(2) <<  loanAmount << endl;
 	cout << "Monthly Interest Rate:	" << setw(14) << fixed << showpoint << setprecision(2) << rate * 100 << "%" << endl; // Displays the rate as a percentage.
 	cout << "Number of Payments:	" << setw(20) << numPayments << endl;
 	cout << " Monthly Payment:		$" << setw(14) << fixed << showpoint << setprecision(2) << monthlyPayment << endl;
 	amountPaidBack = monthlyPayment * numPayments; // Math to determine the amount paid back.
 	cout << "Amount Paid Back:		$" << setw(12) << fixed << showpoint << setprecision(2) << amountPaidBack << endl;
 	interestPaid = amountPaidBack - loanAmount; // Math to determine the amount of interest paid.
 	cout << "Interest Paid:		$" << setw(13) << fixed << showpoint << setprecision(2) << interestPaid << endl;

 	return 0;
 }