//Lab11-1.cpp - calculates the total sales
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{	
    //declare arrays and variable
	int domestic[6] = {12000, 45000, 32000, 
					   67000, 24000, 55000};
	int international[6] = {10000, 56000, 42000, 
							23000, 12000, 34000};
	int totalSales = 0;	//accumulator

	//accumulate sales
	for (int x = 0; x < 6; x += 1)
		totalSales += domestic[x] + international[x];
	//end for

	//display total sales
	cout << "Total sales: $" << totalSales << endl;

	//system("pause");
    return 0;
}   //end of main function