//Lab8-1.cpp - displays each region's total sales
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int sales            = 0;
	int region           = 1;	//counter
	int totalRegionSales = 0;	//accumulator

	while (region < 3)
	{
		//get current region's first sales amount
		cout << "First sales amount for Region " 
			<< region << " (negative number to end): ";
		cin >> sales;

		while (sales >= 0)
		{
			//add sales amount to region total
			totalRegionSales += sales;
			//get next sales amount for 
			//current region
			cout << "Next sales amount for Region "
				<< region << " (negative number to end): ";
			cin >> sales;
		}	//end while

		//display current region's total sales
		cout << "****************Region " << region
			<< " sales: $" << totalRegionSales 
			<< endl << endl;
		
		//update counter 
		region += 1;
		
	}	//end while

	//system("pause");
	return 0;
}	//end of main function