//Lab9-1.cpp - simulates a number guessing game
//Created/revised by <your name> on <current date>

#include <iostream>
#include <ctime>
//#include <cstdlib>
using namespace std;

int main()
{
	//declare variables
	int randomNumber = 0;
	int numberGuess  = 0;
	
	//generate a random number from 1 through 10
	srand(static_cast<int>(time(0)));
	randomNumber = 1 + rand() % (10 - 1 + 1);

	//get first number guess from user
	cout << "Guess a number from 1 through 10: ";
	cin >> numberGuess;

	while (numberGuess != randomNumber)
	{
		cout << "Sorry, guess again: ";
		cin >> numberGuess;
	}	//end while

	cout << endl << "Yes, the number is " 
		<< randomNumber << "." << endl;
	
	//system("pause");
	return 0;
}   //end of main function