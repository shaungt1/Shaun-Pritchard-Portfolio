//Advanced15.cpp - displays gross pay, federal tax, state tax, and net pay
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare constants and variables
	const double FED_RATE   = .2;
	const double STATE_RATE = .05;
	double inputGross       = 0.0;
	//assign the int data type to each of the following variables
	double gross      = 0;
	double federalTax = 0;
	double stateTax   = 0;
	double net        = 0;

	cout << "Gross pay: ";
	cin >> inputGross;
	
	//multiply inputGross by 100, assigning the result (as an integer) to gross
	gross = inputGross;
	//multiply gross by FED_RATE, then add .5; assign the result (as an integer) to federalTax
	federalTax = gross * FED_RATE;
	//multiply gross by STATE_RATE, then add .5; assign the result (as an integer) to stateTax
	stateTax = gross * STATE_RATE;
	net = gross - federalTax - stateTax;
	
	//display the gross, federalTax, stateTax, and net
	//divide each value by 100.0 before displaying
	cout << fixed << setprecision(2) << endl;
	cout << "Gross:   " << gross << endl;
	cout << "Federal: -" << federalTax << endl;
	cout << "State:   -" << stateTax << endl;
	cout << "         -----" << endl;
	cout << "Net:     " << net << endl;

	//system("pause");
	return 0;
}	//end of main function