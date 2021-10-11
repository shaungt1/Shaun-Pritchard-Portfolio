//Introductory24.cpp - displays the total sales
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char anotherSale = ' ';
	int salesAmount  = 0;
	int totalSales   = 0;

	cout << "Do you want to enter a sales amount (Y or N)? ";
	cin >> anotherSale;

	//perform loop 
	//replace this comment with the missing while clause
	{
		cout << "Enter the sales amount: ";
		cin >> salesAmount;
		totalSales += salesAmount;
		cout << "Do you want to enter a sales amount (Y or N)? ";
		cin >> anotherSale;
	}//end while

	cout << fixed << setprecision(0);
	cout << "Total sales: $" << totalSales << endl;

	//system("pause");
	return 0;
}	//end of main function
