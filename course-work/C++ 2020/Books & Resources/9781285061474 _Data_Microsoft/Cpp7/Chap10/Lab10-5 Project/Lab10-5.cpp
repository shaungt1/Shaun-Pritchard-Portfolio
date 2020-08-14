//Lab10-5.cpp - displays the total points 
//earned and the grade
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

//function prototype
void assignGrade(int pointsEarned, char letter);

int main()
{
    //declare variables
	int score       = 0;
	int totalPoints = 0;  //accumulator
	char grade      = ' ';

	for (int x = 1; x < 5; x += 1)
	{
		cout << "Score " << x << ": "; 
		cin >> score; 
		//add score to accumulator
		totalPoints = totalPoints + score;
	} //end for
	
	//assign grade
	assignGrade(totalPoints, grade);

	//display total points and grade
	cout << endl;
	cout << "Total points: " << totalPoints << endl;
	cout << "Grade: " << grade << endl;

	//system("pause");
	return 0;
}	//end of main function

//*****function definitions*****
void assignGrade(int pointsEarned, char letter)
{
	if (pointsEarned >= 360)   
		letter = 'A';
	else if (pointsEarned >= 320)   
		letter = 'B';
	else if (pointsEarned >= 280)   
		letter = 'C';
	else if (pointsEarned >= 240)   
		letter = 'D';
	else letter = 'F';
	//end if
}  //end of assignGrade function