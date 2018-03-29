/* Craig Laughrin
 Chapter 2
*/

#include <iostream>
#include <ctime> // Used for time random numbers

using namespace std;

int main ()
{
	// This is a random number generator to generate numbers in the range the user inputs
	
	int max, min, num, range;
	cout << "Enter the bottom of the range for the random numbers: ";
	cin >> min;
	cout << "Enter the top of the range for the random numbers: ";
	cin >> max;
	range = max - min + 1;
	
	int seed = time(0);
	srand(seed);
	num = rand() % range + min;
	cout << "The resulting random number is: " << num;
	
	return 0;
}