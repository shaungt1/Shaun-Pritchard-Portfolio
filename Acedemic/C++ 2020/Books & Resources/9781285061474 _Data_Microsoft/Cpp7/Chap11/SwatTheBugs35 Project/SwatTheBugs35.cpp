//SwatTheBugs35.cpp - displays the total amount in inventory
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	int inventory[10] = {34, 50, 75, 65, 89,
						 50, 25, 48, 35, 67};
	int total = 0;

	for (int sub = 1; sub < 10; sub += 1)
		total =+ inventory[sub];
	//end for

	cout << "Total amount in inventory: " << total << endl;

	//system("pause");
	return 0;
}	//end of main function