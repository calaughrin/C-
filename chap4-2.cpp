/* Craig Laughrin
 Chapter 4-2
*/

#include <iostream>

using namespace std;
int main ()
{
	int user1Choice, user2Choice;
	
	cout << "Enter the choice for user 1; use 1 for 'rock', 2 for 'paper', 3 for 'scissors'";
	cin >> user1Choice;
	cout << "Enter the choice for user 2; use 1 for 'rock', 2 for 'paper', 3 for 'scissors'";
	cin >> user2Choice;
	/* 
	if (user1Choice == 1 && user2Choice ==1)
		cout << "It was a tie!" << endl;
	if (user1Choice == 1 && user2Choice ==2)
		cout << "User 2 Wins!" << endl;
	if (user1Choice == 1 && user2Choice ==3)
		cout << "User 1 Wins!" << endl;
	if (user1Choice == 2 && user2Choice ==1)
		cout << "User 1 Wins!" << endl;
	if (user1Choice == 2 && user2Choice ==2)
		cout << "It was a tie!" << endl;
	if (user1Choice == 2 && user2Choice ==3)
		cout << "User 2 Wins!" << endl;
	if (user1Choice == 3 && user2Choice ==1)
		cout << "User 2 Wins!" << endl;
	if (user1Choice == 3 && user2Choice ==2)
		cout << "User 1 Wins!" << endl;
	if (user1Choice == 3 && user2Choice ==3)
		cout << "It was a tie!" << endl;
	 */
	 
	 if (user1Choice == 1)
	 {
		 if (user2Choice == 1)
		 {
			 cout << "You both picked 'rock'" << endl;
			 cout << "It was a tie!" << endl;
		 }
		 if (user2Choice == 2)
		 {
			 cout << "You both picked 'paper'" << endl;
			 cout << "It was a tie!" << endl;
		 }
		 if (user2Choice == 3)
		 {
			 cout << "You both picked 'scissors'" << endl;
			 cout << "It was a tie!" << endl;
		 }
	 }
	
	return 0;
}