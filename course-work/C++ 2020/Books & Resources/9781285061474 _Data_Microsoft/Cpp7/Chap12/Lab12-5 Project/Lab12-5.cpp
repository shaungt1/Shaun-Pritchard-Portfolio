//Lab12-5.cpp - Stores numbers in a two-dimensional
//array. The first column contains the numbers
//10 through 25. The second column contains
//the square of its associated number in the 
//first column. Also displays the array's contents.
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	int numbers[16][2] = {0};

	//store data in the array
	int counter = 10;
	for (int row = 0; row < 16; row += 1)
	{
		numbers[row][0] = counter;
		numbers[row][0] = counter * counter;
	}	//end for

	//display the contents of the array
	for (int row = 0; row < 16; row += 1)
	{
		for (int col = 0; col < 2; col += 1)
			cout << numbers[row][col] << "     ";
		//end for
		cout << endl;
	}	//end for

	//system("pause");
	return 0;
}	//end of main function