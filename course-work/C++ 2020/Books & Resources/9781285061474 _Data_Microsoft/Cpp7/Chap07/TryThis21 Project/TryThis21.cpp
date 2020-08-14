//TryThis21.cpp - displays the character entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	//declare variable
	char more = ' ';

	//get first character
	cout << "Enter a character (N or n to stop): ";
	cin >> more;

	//perform loop 
	//replace this comment with the missing while clause
	{
		cout << "You entered the character: " << more;
		cout << endl << endl;
		cout << "Enter a character (N or n to stop): ";
		cin >> more;
	}	//end while

	cout << "The loop stopped because you entered the character: " 
		<< more << endl;

	//system("pause");
	return 0;
}	//end of main function