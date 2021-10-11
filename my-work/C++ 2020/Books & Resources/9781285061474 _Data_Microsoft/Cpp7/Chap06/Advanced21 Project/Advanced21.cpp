//Advanced21.cpp - calculates and displays a commission
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //declare named constants and variables
	const double RATE1 = .02;
	const double RATE2 = .05;
	double sales       = 0.0;
	double commission  = 0.0;
	
	//get input item
	cout << "Enter the sales amount: "; 
	cin >> sales; 

	//calculate commission
	if (sales <= 15000.0)
		commission = sales * RATE1;
	else
		commission = sales * RATE2;
	//end if

	//display commission
	cout << fixed << setprecision(2);
	cout << "Commission: $" << commission << endl;

	//system("pause");
	return 0;
}	//end of main function
