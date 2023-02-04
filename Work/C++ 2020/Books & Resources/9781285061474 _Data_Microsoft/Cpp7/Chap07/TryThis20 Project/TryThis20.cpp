//TryThis20.cpp - displays the number entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	//declare variable
	int number = 0;

	//get first number
	cout << "Enter a number (negative number to stop): ";
	cin >> number;

	//perform loop 
	//replace this comment with the missing while clause
	{
		cout << "You entered the number " << number << ".";
		cout << endl << endl;
		cout << "Enter a number (negative number to stop): ";
		cin >> number;
	}	//end while

	cout << "The loop stopped because you entered a negative number." << endl;

	//system("pause");
	return 0;
}	//end of main function