/* Craig Laughrin
 Programming Challenge Id (Chapter 5 Challenge 6)
 Ocean Levels over a 25 year period
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /* Sets constant values */
    const double oceanLevel = 1.5;
    const int yearsTotal = 24;

    /* Intializes the variables */
    int year = 0;
    double risenTotal = 0;

    /* Displays what the the program is doing */
    cout << "The ocean level has risen more or less stably at about 1.5 mm\n"
         << "per year. Assuming that the rise will remain at this rate, the\n"
         << "following table will show the predicted rise of the ocean level\n"
         << "in a period of 25 years.\n\n";

    /* Formats the table header */
    cout << "Year" << "\t\t\t\t" << "Ocean Level\n"
         << "--------------------------------------------\n";

    /* Loop to calculate the total and increment the years */
    for (year = 1; year <= yearsTotal; year++)
    {
        risenTotal = (year * oceanLevel);
        
        /* Displays the formatted table */
        cout << fixed << showpoint << setprecision(1);
        cout << "In year " << year << "\t\t\t" << "The rise was: " 
             << setw(4) << right << risenTotal << " mm"  << endl;
    }

    /* Display the total rise after 25 years */
    cout << "--------------------------------------------\n";
    cout << "After " << year << " years the ocean level will rise by:  " << (risenTotal + oceanLevel) << " mm\n";
    
    return 0;
}
