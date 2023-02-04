//SwatTheBugs37.cpp - calculates and displays
//the total price of the CDs entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string cdName  = "";
	double cdPrice = 0.0;
	double total   = 0.0;  //accumulator

	//get CD name
	cout << "CD name (X to end): ";
	getline(cin, cdName);

	while (cdName != "X" && cdName != "x")
	{
		//get CD price
		cout << "CD price: ";
		cin >> cdPrice;
		//add price to accumulator
		total += cdPrice;
		//get next CD name
		cout << "CD name (X to end): ";
		getline(cin, cdName);
	}	//end while

	cout << fixed << setprecision(2);
	cout << "Total: " << total << endl;

	//system("pause");
	return 0;
}	//end of main function