//Ch13Lab5.cpp
//displays each character contained in a string
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>
using namespace std;

int main()
{	
	char another = 'Y';
    string message = "";

	while (toupper(another) == 'Y')
	{
		cout << "Enter a message: ";
		getline(cin, message);

		for (int x = 0; x < message.length(); x += 1)
			cout << message.substr(x) << endl;
		//end for

		cout << endl << "Another message (Y/N)? ";
		cin >> another;
		cin.ignore(100, '\n');
	}  //end while

	//system("pause");
    return 0;
}   //end of main function