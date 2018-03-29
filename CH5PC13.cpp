/* Craig Laughrin
 Programming Challenge Id (Chapter 5 Challenge 13)
 Random Number Guessing Game Enhancement
*/

#include <iostream>
#include <cstdlib>  // Needed for srand.
#include <ctime>    // Needed for random number generation.

using namespace std;

int main()
{
    srand(unsigned(time(NULL)));    // Generates random number.
    int num1, answer, tries = 0;    // Initializes variable.

    /* Tells user what is going on. */
    cout << "This is a number guessing game.\n\n";

    num1 = rand() % 100 + 1;    // Assigns the random number between 1-100 to the num1 variable.

    do  // Loop to get user input until the random number is guessed.
    {
        cout << "Enter your answer: ";
        cin >> answer;

        cout << "\n\n";

        if (answer > num1)
        {
            cout << "Your guess is too high. Try again!" << endl;
            tries++;    // Increments the counter.
        }
        else if (answer < num1)
        {
            cout << "Your guess is too low. Try again!" << endl;
            tries++;    // Increments the counter.
        }
        else
        {
            cout << "You guessed my number. Congratulations! My number was " << num1 << endl;
            cout << "It took you " << tries << " tries to guess my number." << endl;
        }
    } while (answer != num1);   // Runs the loop till the random number is guessed.

    return 0;
}