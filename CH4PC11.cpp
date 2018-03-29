/* Craig Laughrin
 Programming Challenge Id (Chapter 4 Challenge 11)
 Geometry Calculator Programming challenge
*/

#include <iostream>
#include <cmath> // Needed for exponent math

using namespace std;

int main()
{
	/* Sets PI as a constant */
	const double PI = 3.14159;
	/* Sets integer variables. */
	int rectangleArea,
	radius,
	area,
	width,
	length,
	height,
	userInput;
	/* Sets variables as float to allow for decimals. */
	float circleArea,
	triangleArea;
	/* Displays the menu. */
	cout << "Enter 1 for the area of a circle." << endl;
	cout << "Enter 2 for the area of a rectangle." << endl;
	cout << "Enter 3 for the area of a triangle." << endl;
	cout << "Enter 4 for to quit the program." << endl;
	/* Gets user input. */
	cout << "Choose Your option: ";
	cin >> userInput;

        if (userInput >= 1 && userInput <= 4) // Validates user input
        {
        	/* Program for menu options. */
        	switch (userInput)
			{
				case 1:
					cout << "Enter the radius of a circle\n";
					cin >> radius;
					circleArea= PI * pow(radius, 2);
					cout << "The area of the circle is " << circleArea << endl;
					break;
				case 2:
					cout << "Enter the length of the rectangle" << endl;
					cin >> length;
					cout << "Enter the width of a rectangle"<< endl;
					cin >> width;
					rectangleArea = length * width;
					cout << "The area of the rectangle is " << rectangleArea << endl;
					break;
				case 3:
					cout << "Enter the length of a triangle" << endl;
					cin >> length;
					cout << "Enter the height of a triangle" << endl;
					cin >> height;
					triangleArea = .5 * length * height;
					cout << "The area of the triangle is " << triangleArea << endl;
					break;
				case 4:
					cout << "Quit Program..." << endl;
					return 0;	
       		}
	    }
	    /* Informs the user they did not select a valid option. */
		else if (userInput != 4)
        {
			cout << userInput << " Is not a valid option.\nPlease run the program again." << endl;
        }
	return 0;
}