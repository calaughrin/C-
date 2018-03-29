/* Craig Laughrin
 Programming Challenge Id (Mid-Term Exam)
 Math Tutor Part 1
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
	/* Variables and random number generation */
	srand(unsigned(time(NULL)));
	int userInput, min, max, answer;
	// Gets user input
	cout << "Please enter the lowest number for the range.\nMust be greater than 0.";
	cin >> min;
	cout << "Please enter the highest number for the range.";
	cin >> max;

	min = 1 + rand() % min; // set lower random number
	max = 3 * rand() % max; // set higher random number
	answer = max + min;
	// Displays the problem
	cout << max << " + " << min <<  " = " << endl;
	cin >> userInput;
	// Shows right or wrong
	if (userInput == answer)
	{
		cout << "Congratulations " << userInput << " is correct.";
	}
	if (userInput != answer)
	{
		cout << "I'm sorry " << userInput << " is incorrect.";
	}
	
	return 0;
}