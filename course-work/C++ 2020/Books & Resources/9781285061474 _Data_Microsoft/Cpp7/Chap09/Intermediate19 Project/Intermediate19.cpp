//Intermediate19.cpp - allows you to experiment with scope and lifetime
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

//declare global variable


//function prototype
int getDoubleNumber();

int main()
{
	int number       = 0;
	int doubleNumber = 0;

	//get input item
	cout << "Enter a number: ";
	cin >> number;

	//double the number
	doubleNumber = getDoubleNumber();

	//display result
	cout << "Answer: " << doubleNumber << endl;

	//system("pause");
	return 0;
}	//end of main function

//*****function definitions*****
int getDoubleNumber()
{
	return number * 2;
}	//end of getDoubleNumber function