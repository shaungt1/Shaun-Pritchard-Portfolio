//Lab13-1.cpp - removes parentheses, hyphens,
//and spaces from a phone number
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string phone       = "";
	string currentChar = "";
	int numChars       = 0;
	int subscript      = 0;

	//get phone number
	cout << "Enter a phone number "
		<< "in this format (xxx) xxx-xxxx: ";
	getline(cin, phone);
	
	//determine number of characters
	numChars = phone.length();

	//remove parentheses, hyphens, and spaces
	while (subscript < numChars)
	{
		currentChar = phone.substr(subscript, 1);
		if (currentChar == "(" 
			|| currentChar == ")"
			|| currentChar == "-"
			|| currentChar == " ")
		{
			phone.erase(subscript, 1);
			numChars -= 1;
		}
		else
			subscript += 1;
		//end if
	}	//end while

	//display phone number
	cout << "Phone number without " 
		<< "parentheses, hyphens, or spaces: " 
		<< phone << endl;

	//system("pause");
	return 0;
}	//end of main function