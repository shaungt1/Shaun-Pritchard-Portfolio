//SwatTheBugs26.cpp - displays the sum of two numbers
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

//function prototypes
void getNumber(int &num)
void calcSum(int n1, int n2, int n3)

int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	
	//enter input items
	getNumber(&num1);
	getNumber(&num2);

	//calculate and display sum
	calcSum(num1, num2, num3);
	cout << "Sum: " << num3 << endl;

	//system("pause");
	return 0;
}	//end of main function

//*****function definitions*****
void getNumber(int &num)
{
	cout << "Enter a number: ";
	cin >> num;
}   //end of getNumber function

void calcSum(int n1, int n2, int n3)
{
	n3 = n1 + n2;
}   //end of calcSum function
