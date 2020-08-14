//Lab5-5.cpp - displays a service charge, which is 1%
//of the purchase price; however, an additional $5 service
//charge should be added to code 2 purchases
//Created/revised by <your name> on <current date>

#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	char code  		  = ' ';
	double purchase   = 0.0;
	double serviceChg = 0.0;

	//enter input data
	cout << "Enter code: ";
	cin >> code;
	cout << "Purchase price: ";
	cin >> purchase;

	//calculate service charge
	serviceChg = purchase * .01;
	//add $5 to code 2 purchases
	if (code = '2')
		serviceChg = serviceChg + 5;
	//end if

	//display service charge
	cout << fixed << setprecision(2);
	cout << "Service charge: " << serviceChg << endl;

	//system("pause");
	return 0;
}   //end of main function
