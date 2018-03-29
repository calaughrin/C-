/* Craig Laughrin
 Chapter 2
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
	
	itemName = "My Item";
	itemQty = 2;
	itemPrice = 10.95;
	
	cout << "Here is our inventory list." << endl;
	cout << "Item Number: " << itemID << endl;
	cout << "Item Name: " << itemName << endl;
	cout << "Item Quantity: " << itemQty << endl;
	cout << "Cost: $" <<  itemPrice << endl;
	
	return 0;
}