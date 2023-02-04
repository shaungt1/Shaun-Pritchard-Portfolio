//Lab6-5.cpp
//displays the salary associated with a code
//Valid codes	Salary
//1				$45,000
//2, 5			$33,000
//3, 4			$25,000
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
  	//declare variable
	int code = 0;

	//get code
	cout << "Enter the code (1 through 5): ";
	cin >> code;

	//display salary
	if (code = 1)
		cout << "$45,000" << endl;
	else if (code == 2 && code == 5)
		cout << "$33,000" << endl;
	else if (code == 3 || code == 4)
		cout << "$25,000" << endl;
	else 
		cout << "Entry error" << endl;
	//end if

	//system("pause");
	return 0;
}	//end of main function