/* Craig Laughrin
 Chapter FinancialMenu
*/

#include <iostream>
#include <cmath>
#include <iomanip>

int counter = 25;

using namespace std;

// Prototypes
void calcPresentValue();
void calcFutureValue();
void loanCalculator();

int main ()
{
	int choice;
	char confirm;
	
	do
	{
		cout << "Select one of the choices below (enter 1 - 5):" << endl;
		cout << "1: Calculate Present Value" << endl;
		cout << "2: Calculate Future Value" << endl;
		cout << "3: Loan Calculator" << endl;
		cout << "4: Go to page 4" << endl;
		cout << "5: exit the program" << endl;
	do
	{
		cin >> choice;
		if (choice < 1 || choice > 5);
		{
			cout << "You did not enter a valid number. Enter a number between 1 and 5: ";
		}
	} while (choice < 1 || choice > 5);

	switch (choice)
	{
		case 1:
			calcPresentValue();
			//cout << "Calculate Present Value: " << endl;
			break;
		case 2:
			calcFutureValue();
			//cout << "Calculate Future Value: " << endl;
			break;
		case 3:
			loanCalculator();
			//cout << "Loan Calculator: " << endl;
			break;
		case 4:
			cout << "Going to page 4: " << endl;
			break;
		default:
			cout << "Are you sure you want to quit? Y/N ";
			cin >> confirm;
			if (confirm == 'y' or confirm == 'Y')
			{
				cout << "Exiting program... " << endl;
			}
			else
				choice = 0;
	}
	if (choice != 5)
	{
		cout << "Press 'Enter' key to return to the menu: ";
		cin.ignore();
		cin.get();
	}

	}while (choice != 5);
	
	return 0;
}

void calcPresentValue()
{
	double pValue, fValue, intRate;
	int numYears;
	char answer;

	do
	{
		cout << "Enter the desired future amount: $";
		cin >> fValue;
		cout << "Enter the annual interest rate as a percentage: ";
		cin >> intRate;
		cout << "How many years do you want to save? ";
		cin >> numYears;
		cout << "Is the interest compund monthly? Enter 'Y' for yes, anything else for no: ";
		cin >> answer;

		if (answer == 'Y' or answer == 'y')
		{
			intRate /= 12;
			numYears *= 12;
		}

		pValue = fValue/(pow(1+intRate/100, numYears));

		cout << "You would need to deposit $" << pValue << " now to have $" << fValue << " in " << numYears <<" years." << endl;

		cout << "Do you want to calculate another Present Value? nter 'Y' for yes, anything else for no: ";
	}while (answer == 'Y' or answer == 'y');
}

void calcFutureValue()
{
	double pValue, fValue, intRate;
	int numPayments;
	char answer;

	do
	{
		cout << "Enter the amount you're going to invest: $";
		cin >> pValue;
		cout << "Enter the annual interest rate as a percentage: ";
		cin >> intRate;
		cout << "How many payments? ";
		cin >> numPayments;
		cout << "Is the interest compund monthly? Enter 'Y' for yes, anything else for no: ";
		cin >> answer;

		if (answer == 'Y' or answer == 'y')
		{
			intRate /= 12;
			numPayments *= 12;
		}

		fValue = pValue*(pow(1+intRate/100, numPayments));

		cout << "If you deposit $" << pValue << " now, you will have $" << fValue << " in " << numPayments <<" payments." << endl;

		cout << "Do you want to calculate another Present Value? nter 'Y' for yes, anything else for no: ";
	}while (answer == 'Y' or answer == 'y');
}

void loanCalculator()
{
	int numPayments; // Sets integer variable.

 	// Sets double variables.
 	double rate,
 	loanAmount,
 	monthlyPayment,
 	amountPaidBack,
 	interestPaid;
 	char answer;

	do
	{
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

	 	cout << "Do you want to calculate another Present Value? nter 'Y' for yes, anything else for no: ";
	}while (answer == 'Y' or answer == 'y');
}