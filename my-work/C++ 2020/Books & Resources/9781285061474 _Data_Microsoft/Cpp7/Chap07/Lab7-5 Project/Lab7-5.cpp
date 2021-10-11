//Lab7-5.cpp - calculates and displays the average price
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numPrices     = 0;    //counter
	double price      = 0.0;
	double totalPrice = 0.0;  //accumulator
	double avgPrice   = 0.0;

	//get the first price
	cout << "Price (negative number to end): ";
	cin >> price;

	while (price >= 0.0)
	{    
		//update the counter and accumulator
		numPrices = numPrices + 1;    
		totalPrice = totalPrice + price;    
		cout << "Next price: ";    
	} //end while

	//verify that a price was entered
	if (numPrices > 0) 
		avgPrice = totalPrice / numPrices;    
	else    
		avgPrice = 0.0;
	// end if

	cout << fixed << setprecision(2) << endl;
	cout << "Average price: " << avgPrice << endl;

	//system("pause");
	return 0;
}	//end of main function