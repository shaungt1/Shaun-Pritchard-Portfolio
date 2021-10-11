//Lab15-5.cpp
//Displays an item name and an inventory quantity
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//instantiate object
	Inventory itemObj;

	//declare variables
	string itemName = "";
	int amount      = 0;

	//get item name and inventory amount
	cout << "Enter item name: ";
	getline(cin, itemName);
	cout << "Enter amount in inventory: ";
	cin >> amount;
	
	//assign and display item values
	itemObj.setItem(itemName, amount);
	cout << "Name: " << itemObj.getName() << endl;;
	cout << "Amount: " << itemObj.getQuantity() << endl;

	//system("pause");
	return 0;
}	//end of main function
