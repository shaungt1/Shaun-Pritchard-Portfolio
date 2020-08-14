//Lab15-5 Inventory.h
//Created/revised by <your name> on <current date>

#include <string>
using namespace std;

//declaration section
class Inventory
{
public:
	Inventory();
	void setItem(string, int);
	string getName();
	int getQuantity();
private:
	string name;
	int quantity;
}; 

//implementation section
Inventory::Inventory()
{
	name     = "";
	quantity = 0;
}	//end of default constructor

void Inventory::setItem(string n, int num)
{
	name = n;
	if (quantity > 0)
		quantity = num;
	else
		quantity = 0;
	//end if
}	//end of setItem method

string Inventory::getName()
{
	return name;
}	//end of getName method

int Inventory::getQuantity()
{
	return quantity;
}	//end of getQuantity method
