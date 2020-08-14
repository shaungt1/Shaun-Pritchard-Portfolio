//Advanced29.cpp
//allows the user to guess a letter chosen
//randomly by the computer
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>
#include <ctime>
//#include <cstdlib>

using namespace std;

int main()
{
	//declare variables
	string letters      = "abcdefghijklmnopqrstuvwxyz";
	string randomLetter = "";
	string letterGuess  = "";

	//get a letter from the user
	cout << "Enter a letter in lowercase: ";
	getline(cin, letterGuess);

	//system("pause");
	return 0;
}	//end of main function