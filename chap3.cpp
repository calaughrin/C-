/* Craig Laughrin
 Chapter 3
*/

#include <iostream>

using namespace std;
int main ()
{
	int itemID;
	// cout << itemID << endl;
	itemID = 10;
	// cout << itemID << endl;
	
	string itemName = " ";
	int itemQty = 0;
	double itemPrice = 0;
	/*
	itemName = "My Item";
	itemQty = 2;
	itemPrice = 10.95;
	*/
	
	cout << "Inventory Management Software" << endl;
	cout << "Please enter and Item Name: ";
	cin >> itemName;
	cin.ignore();
	cin.ignore(80, '\n');
	// cin.getline(itemName, 30); // This only works with cstrings
	// getline(cin, itemName);
	cout << "Please enter an item Number: ";
	// cin >> itemID;
	cout << "Please enter the quantity of " << itemName << ": ";
	cin >> itemQty;
	cout << "Please enter the sales price of " << itemName << ": $";
	cin >> itemPrice;
	
	cout << "Here is our inventory list." << endl;
	cout << "Item Number: " << itemID << endl;
	cout << "Item Name: " << itemName << endl;
	cout << "Item Quantity: " << itemQty << endl;
	cout << "Cost: $" <<  itemPrice << endl;
	
	return 0;
}