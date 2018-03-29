/* Craig Laughrin
 Chapter 4
*/

#include <iostream>

using namespace std;
int main ()
{
	int grade = 99;
	if (grade == 100) // == is for comparison and not setting a value
		cout << "You got a perfect score!" << endl;
	else
		cout << "You did not get a perfect score!" << endl;
	/*
	if (grade >= 90)
		cout << "You got an A!" << endl;
	if (grade >=80 and grade < 90) // && = and
		cout << "You got a B!" << endl;
	*/	
	
	if (grade >= 90)
		cout << "You got an A!" << endl;
	else if (grade >= 80) // && = and
		cout << "You got a B!" << endl;
	else if (grade >= 70) // && = and
		cout << "You got a C!" << endl;
	else if (grade >= 60) // && = and
		cout << "You got a D!" << endl;
	else
		cout << "You FAILED!!!" << endl;
	
	return 0;
}