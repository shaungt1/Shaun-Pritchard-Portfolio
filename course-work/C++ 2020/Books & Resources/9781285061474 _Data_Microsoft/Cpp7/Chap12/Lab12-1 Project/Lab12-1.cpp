//Lab12-1.cpp - calculates the total sales
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{	
    //declare arrays and variable
	int company[2][6] = {{12000, 45000, 32000, 
					   	  67000, 24000, 55000}, 
						 {10000, 56000, 42000, 
						  23000, 12000, 34000}};
	int companySales = 0;	//accumulator

	//accumulate sales
	for (int location = 0; location < 2; location += 1)
		for (int month = 0; month < 6; month += 1)
			companySales += company[location][month];
		//end for
	//end for

	//display total sales
	cout << "Company sales: $" << companySales << endl;

	//system("pause");
    return 0;
}   //end of main function