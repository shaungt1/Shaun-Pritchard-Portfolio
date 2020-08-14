//Lab11-5.cpp - increases quantities and then
//displays the results
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	//declare variable and array
	int increase = 0;
	int quantities[10] = {10, 15, 20, 45, 63, 
						  24, 19, 67, 12, 10};
	
	//get increase amount
	cout << "Enter the increase (or decrease) number: ";
	cin >> increase;
	//display old quantity, increase the quantity, 
	//then display new quantity
	for (int x = 0; x < 10; x += 1)
	{
		cout << "Old quantity: " << quantities[x] << endl;
		increase += quantities[x];
		cout << "New quantity: " << quantities[x] 
			<< endl << endl;
	} //end for

	//system("pause");
	return 0;
}	//end of main function