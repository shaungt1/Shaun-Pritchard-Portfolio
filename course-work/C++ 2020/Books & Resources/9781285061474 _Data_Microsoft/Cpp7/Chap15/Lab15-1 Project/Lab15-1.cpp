//Lab15-1.cpp - increases and then displays a price
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//declaration section
class Item
{
public:
	Item();
	void setData(string, double);
	double getIncreasedPrice(double);
private:
	string id;
	double price;
};

//implementation section
Item::Item()
{
	id    = "";
	price = 0.0;
} //end of default constructor

void Item::setData(string idNum, double p)
{
	id = idNum;
	price = p;
}  //end of setData method

double Item::getIncreasedPrice(double rate)
{
	if (rate > 1.0)
		rate = rate / 100;
	//end if
	return price + price * rate;
}  //end of getIncreasedPrice method


int main()
{	
    //instantiate Item object
	Item computer;

	//declare variables
	string computerId    = "";
	double computerPrice = 0.0;
	double incRate       = 0.0;

	cout << fixed << setprecision(2);

	//get computer ID
	cout << "Computer ID (X to end): ";
	getline(cin, computerId);
	while (computerId != "X" && computerId != "x")
	{
		//get price and increase
		cout << "Enter the price: ";
		cin >> computerPrice;
		cin.ignore(100, '\n');
		cout << "Increase rate in decimal form: ";
		cin >> incRate;
		cin.ignore(100, '\n');

		//assign the ID and price
		

		//display the increased price
		cout << "The new price of computer " 
			<< computerId << " is $" 
			
			<< endl;

		//get computer ID
		cout << endl
			<< "Computer ID (X to end): ";
		getline(cin, computerId);
	}	//end while
	
	//system("pause");
    return 0;
}   //end of main function