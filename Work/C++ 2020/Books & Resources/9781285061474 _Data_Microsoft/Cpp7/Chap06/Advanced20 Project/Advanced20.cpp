//Advanced20.cpp - displays the names of the gifts in the 
//song "The Twelve Days of Christmas"
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
  	//declare variable
	int day = 0;

	//enter input
	cout << "Enter the day (1 through 12): ";
	cin >> day;

	//display output
	switch (day)
	{
	case 1:	
			cout << "1 partridge in a pear tree" << endl;
			
	case 2:	
			cout << "2 turtle doves" << endl;
			
	case 3:	
			cout << "3 french hens" << endl;
			
	case 4:	
			cout << "4 calling birds" << endl;
			
	case 5: 
			cout << "5 golden rings" << endl;
			
	case 6:	
			cout << "6 geese a laying" << endl;
			
	case 7:	
			cout << "7 swans a swimming" << endl;
			
	case 8: 
			cout << "8 maids a milking" << endl;
			
	case 9: 
			cout << "9 ladies dancing" << endl;
			
	case 10: 
			cout << "10 lords a leaping" << endl;
			
	case 11: 
			cout << "11 pipers piping" << endl;
			
	case 12: 
			cout << "12 drummers drumming" << endl;
			break;
	default: 
			cout << "Error in day number." << endl;
	} //end switch

	//system("pause");
	return 0;
}	//end of main function
