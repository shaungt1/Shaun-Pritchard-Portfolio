//Advanced15.cpp - demonstrates the proper procedure for comparing real numbers
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	double num1     = 10.0;
	double num2     = 3.0;
	double quotient = 0.0;

	//calculate quotient
	quotient = num1 / num2;
	
	//compare for equality
	if (quotient == 3.33333)
		cout << "Yes, the quotient " << quotient << " is equal to 3.33333." << endl;
	else
		cout << "No, the quotient " << quotient << " is not equal to 3.33333." << endl;
	//end if
	
	//system("pause");
	return 0;
}	//end of main function