//Lab10-1.cpp - Converts American dollars to 
//British pounds, Mexican pesos, or Japanese yen
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
void displayMenu();
void convertDols(double dollars, 
				double convertRate, 
				double &converted);

int main()
{
	//declare constants
	const double BRITISH_RATE  = .63071;
	const double MEXICAN_RATE  = 14.0043;
	const double JAPANESE_RATE = 79.48;

	//declare variables
    int menuChoice           = 0;
	double americanDollars   = 0.0;
    double conversionRate    = 0.0;
	double convertedCurrency = 0.0;

	//display output in fixed-point notation
    //with two decimal places
    cout << fixed << setprecision(2);

	//get menu choice
	displayMenu();
	cout << "Enter 1, 2, 3, or 4: ";
	cin >> menuChoice;

	while (menuChoice > 0 && menuChoice < 4)
	{
		//get dollars to convert
		cout << "Number of American dollars: ";
		cin >> americanDollars;

		//assign rate
	    if (menuChoice == 1)
			conversionRate = BRITISH_RATE;
		else if (menuChoice == 2)
			conversionRate = MEXICAN_RATE;
		else
			conversionRate = JAPANESE_RATE;	
		//end if

		convertDols(americanDollars, 
					conversionRate, 
					convertedCurrency);
		cout << "-->" << convertedCurrency 
			<< endl << endl;

		//get menu choice
		displayMenu();
		cout << "Enter 1, 2, 3, or 4: ";
		cin >> menuChoice;
	}	//end while

	//system("pause");
	return 0;
}	//end of main function

//*****function definitions*****
void displayMenu()
{
	cout << "1 British pounds" << endl;
	cout << "2 Mexican pesos" << endl;
	cout << "3 Japanese yen" << endl;
	cout << "4 Stop program" << endl;
}	//end of displayMenu function

void convertDols(double dollars, 
				double convertRate, 
				double &converted)
{
	converted = dollars * convertRate;
}   //end of convertDols function