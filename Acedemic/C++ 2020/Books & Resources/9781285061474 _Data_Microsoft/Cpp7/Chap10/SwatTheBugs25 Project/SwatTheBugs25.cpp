//SwatTheBugs25.cpp - displays a bonus 
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
void enterItems(double salesAmt, double rate);
void calcAndDisplayBonus(double salesAmt, double rate);

int main()
{	
	//declare variables
	double sales     =  0.0;
	double bonusRate =  0.0;

	//enter input values
	enterItems(sales, bonusRate);

	//calculate and display bonus
	cout << fixed << setprecision(2);
	calcAndDisplayBonus(sales, bonusRate);

	//system("pause");
    return 0;
}   //end of main function

//*****function definitions*****
void enterItems(double salesAmt, double rate)
{
	cout << "Enter sales: ";
	cin >> salesAmt;
	cout << "Enter bonus rate (in decimal form): ";
	cin >> rate;
} //end of enterItems function

void calcAndDisplayBonus(double salesAmt, double rate)
{
	cout << "Bonus: $" << salesAmt * rate << endl;
} //end of calcAndDisplayBonus function
