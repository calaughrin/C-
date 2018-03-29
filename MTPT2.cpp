/* Craig Laughrin
 Programming Challenge Id (Mid-Term Exam)
 Math Tutor Part 2
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
	int userInput, min, max, answer, choice;

	cout << "Please enter the lowest number for the range.\nMust be greater than 0.";
	cin >> min;
	cout << "Please enter the highest number for the range.";
	cin >> max;

	min = 1 + rand() % min; // set lower random number
	max = 3 * rand() % max; // set higher random number

	cout << "Enter 1 for addition." << endl;
	cout << "Enter 2 for subtraction." << endl;
	cout << "Enter 3 for multiplication." << endl;
	cout << "Enter 4 for to quit the program." << endl;
	/* Gets user input. */
	cout << "Choose Your option: ";
	cin >> choice;

        if (choice >= 1 && choice <= 4) // Validates user input
        {
        	/* Program for menu options. */
        	switch (choice)
			{
				case 1: // Addition
					cout << "Addition\n";
					answer = max + min;
					cout << max << " + " << min <<  " = " << endl;
					cin >> userInput;
					if (userInput == answer)
					{
						cout << "Congratulations " << userInput << " is correct.";
					}
					if (userInput != answer)
					{
						cout << "I'm sorry " << userInput << " is incorrect.";
					}
					break;
				case 2: // Subtraction
					cout << "Subtraction" << endl;
					answer= max - min;
					cout << max << " - " << min <<  " = " << endl;
					cin >> userInput;
					if (userInput == answer)
					{
						cout << "Congratulations " << userInput << " is correct.";
					}
					if (userInput != answer)
					{
						cout << "I'm sorry " << userInput << " is incorrect.";
					}					break;
				case 3: // Multiplication
					cout << "Multiplication" << endl;
					answer= max * min;
					cout << max << " * " << min <<  " = " << endl;
					cin >> userInput;
					if (userInput == answer)
					{
						cout << "Congratulations " << userInput << " is correct.";
					}
					if (userInput != answer)
					{
						cout << "I'm sorry " << userInput << " is incorrect.";
					}					break;
				case 4: // Quit
					cout << "Quit Program..." << endl;
					return 0;	
       		}
	    }
	    /* Informs the user they did not select a valid option. */
		else if (choice != 4)
        {
			cout << choice << " Is not a valid option.\nPlease run the program again." << endl;
        }

	return 0;
}