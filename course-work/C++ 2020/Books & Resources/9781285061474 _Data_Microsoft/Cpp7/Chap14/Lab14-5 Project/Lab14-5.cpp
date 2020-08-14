//Lab14-5.cpp
//Writes records to a sequential access file
//Created/revised by <your name> on <current date>

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{	
	//declare variables
	string name = "";
	int num1    = 0;
	int num2    = 0;

	//create file object and open the file
	ofstream outFile;
	outFile.open("records.txt", ios::out);

	//determine whether the file was opened
	if (outFile.is_open())
	{
		//get a name and two numbers
		cout << "Enter a name. Enter X to end. ";
		getline(cin, name);
	
		while (name != "X" && name != "x")
		{
			cout << "Enter the first number: ";
			cin >> num1;
			cout << "Enter the second number: ";
			cin >> num2;

			//write the record with a comma 
			//separating each field
			outFile << name << "," << num1 
				<< "," << num2 << endl;
			//get another name
			cout << "Enter a name. Enter X to end. ";
			getline(cin, name);
		} //end while

		//close the file
		outFile.close();
	}
	else
		cout << "Can't open the records.txt file." << endl;
	//end if
	
	//system("pause");
    return 0;
}   //end of main function