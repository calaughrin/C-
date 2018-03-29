/* Craig Laughrin
 Programming Challenge Id (Chapter 4 Challenge 7)
 Time Calculator Programming challenge
*/

 #include <iostream>

 using namespace std;

 int main()
 {
 	/* Sets the constant values */
 	const int constDay = 86400,
 	constHours = 3600,
 	constMinutes = 60;
 	/* Sets the variable values */
 	int intDay = 0,
 	intHours = 0,
 	intMinutes = 0,
 	userInput; 
 	/* Displays the intention of the program and reads back the number that the user input */
 	cout << "This program will calulate the Days, Hours, Minutes, and Seconds\nBased on the number you type in." << endl;
 	cout << "Please enter a whole number(decimals will be ignored): ";
 	cin >> userInput;
 	cout << "The number " << userInput << " is equal to:" << endl;
 	/* If statements that work the number the user input into Days, Hours, and Minutes. The left over modulus value is stored back in the user input variable */
 	if (userInput >= constDay)
 	{
 		intDay = userInput / constDay;
   		userInput %= constDay;
 	}
 	if (userInput >= constHours)
	{
		intHours = userInput / constHours;
		userInput %= constHours;
	}	
	if (userInput >= constMinutes)
	{
		intMinutes = userInput / constMinutes;
		userInput %= constMinutes;
	}	
	/* Displays the Days, Hours, Minutes, and Seconds based ont he number that the user input */
	cout << intDay << " days, " << intHours << " hours, " << intMinutes << " minutes, and " << userInput << " seconds" << endl;

 	return 0;
 }