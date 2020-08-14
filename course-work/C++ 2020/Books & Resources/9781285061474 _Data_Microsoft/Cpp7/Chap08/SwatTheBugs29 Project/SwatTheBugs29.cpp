//SwatTheBugs29.cpp - displays the following pattern of numbers
//2 4 6
//8 10 12
//14 16 18
//20 22 24
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	int number = 0;

	for (int outer = 1; outer < 5; outer =+ 1)
	{
		for (int inner = 1; inner < 4; inner += 1)
			number += 2;
			cout << number << " ";
		//end for
		cout << endl;
	} //end for

	//system("pause");
	return 0;
}   //end of main function