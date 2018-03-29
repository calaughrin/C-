/* Craig Laughrin
 Programming Challenge Id (Chapter 6 Challenge 9)
 Star Search programming challenge
*/

#include <iostream>
#include <iomanip>

using namespace std;
// Sets variables.
char answer;
double s1 = 0.0, s2 = 0.0, s3 = 0.0, s4 = 0.0, s5 = 0.0;
double highest = 0.0, lowest = 0.0;
// Get judges scores.
double getJudgesData(double &s1)
{
	cout << "Enter the judge's score: ";
	cin >> s1;
	while (s1 < 0.0 || s1 > 10.0)
	{
		cout << "Please enter a score between 0 and 10.\n";
		cout << "Please enter the judge's score: ";
		cin >> s1;
		return s1;
	}
}
// Find lowest number.
double findLowest(double &lowest)
{
	if (s1 < s2)
	{
		lowest = s1;
	}
	else { lowest = s2; }
	if (s3 < lowest)
	{
		lowest = s3;
	}
	if (s4 < lowest)
	{
		lowest = s4;
	}
	if (s5 < lowest)
	{
		lowest = s5;
	}
	return lowest;
}
// Find highest number.
double findHighest(double &highest)
{
	if (s1 > s2)
	{
		highest = s1;
	}
	else { highest = s2; }
	if (s3 > highest)
	{
		highest = s3;
	}
	if (s4 > highest)
	{
		highest = s4;
	}
	if (s5 > highest)
	{
		highest = s5;
	}
	return highest;
}
// Calculate average score.
void calcScore()
{
	findLowest(lowest);
	findHighest(highest);
	double total = s1 + s2 + s3 + s4 + s5;
	double average = (total - highest - lowest) / 3;
	cout << "Average score: " << fixed << setprecision(1) << average << endl;
}
// Asks user if they want to enter more scores.
char contestantCheck(char &answer)
{
	cout << "Do you want to enter another contestant? Please type y for yes or n for no.\nAnswer: ";
	cin >> answer;
	if (answer != 'n' || answer != 'N' || answer != 'y' || answer != 'Y');
	{
		cout << "The only answers allowed are y for yes and n for no.\n";
		cin >> answer;
		return answer;
	} 
}

int main()
{
	do
	{// Get the judges scores.
		cout << "Star Search\n";
		cout << "Enter 5 scores for the contestant and I will drop the lowest and highest to find the average score.\n";
		getJudgesData(s1);
		getJudgesData(s2);
		getJudgesData(s3);
		getJudgesData(s4);
		getJudgesData(s5);
		calcScore();
		contestantCheck(answer);
	} while (answer == 'y' || answer == 'Y'); // Loops through until n is entered.
		
	return 0;

}