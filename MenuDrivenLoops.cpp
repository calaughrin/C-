/* Craig Laughrin
 Chapter MenuDrivenLoop
*/

#include <iostream>

int counter = 25;

using namespace std;
int main ()
{
	int choice;
	char confirm;
	
	do
	{
		cout << "Select one of the choices below (enter 1 - 5):" << endl;
		cout << "1: Go to page 1" << endl;
		cout << "2: Go to page 2" << endl;
		cout << "3: Go to page 3" << endl;
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
			cout << "Going to page 1: " << endl;
			break;
		case 2:
			cout << "Going to page 2: " << endl;
			break;
		case 3:
			cout << "Going to page 3: " << endl;
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