/* Craig Laughrin
 Chapter 5-1
*/

#include <iostream>

int counter = 25;

using namespace std;
int main ()
{
	int counter;
	
	cout << "The value of counter is: " << counter << endl;
	
	/* for (int counter = 1; counter < 11; counter++)
	{
		cout << "Inside the loop, counter = ";
		cout << counter << endl;
	}
	
	cout << "Outside the loop, counter = " << counter << endl;
	
	while (counter != -1)
	{
		cout << "You are in the 'while' loop: " << endl;
		cout << "Enter an integer. Enter '-1' to quit: ";
		cin >> counter;
		cout << "You entered " << counter << endl;
	}
	
	do
	{
		cout << "You are in the 'do/while' loop: " << endl;
		cout << "Enter an integer. Enter '-1' to quit: ";
		cin >> counter;
		cout << "You entered " << counter << endl;
	} while (counter != -1);
	*/
	int stopValue;
	cout << "How many numbers do you want to display? ";
	cin >> stopValue;
	counter = 1;
	 
	do
	{
		cout << counter << endl;
		counter++;
	} while (counter <= stopValue);
	
	for (int counter2 = 1; counter2 < 5; counter2++)
	{
		cout << "You are in the 'for' loop: " << endl;
		cout << "Enter an integer. Enter '-1' to quit: ";
		cin >> counter;
		cout << "You entered " << counter << endl;
		if (counter == -1)
			break;
			counter2--;
	}
	
	return 0;
}