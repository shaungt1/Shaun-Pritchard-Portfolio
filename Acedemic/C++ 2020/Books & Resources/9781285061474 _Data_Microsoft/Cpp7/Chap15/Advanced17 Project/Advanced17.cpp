//Advanced17.cpp - displays an updated date
//Created/revised by <your name> on <current date>

#include <iostream>
#include "Advanced17 MyDate.h"
using namespace std;

int main()
{
	//instantiate a MyDate object
	MyDate today;

	//declare variables
	int todayMonth = 0;
	int todayDay   = 0;
	int todayYear  = 0;

	//get month,day, and year from user
	cout << "Enter the month (1-12): ";
	cin >> todayMonth;
	if (todayMonth < 1 || todayMonth > 12)
		cout << "Invalid month number" << endl;
	else
	{
		cout << "Enter the day (1-31): ";
		cin >> todayDay;
		if (todayDay < 1 || todayDay > 31)
			cout << "Invalid day number" << endl;
		else
		{
			cout << "Enter the year: ";
			cin >> todayYear;

			//assign values to private data members
			today.setDate(todayMonth, todayDay, todayYear);

			//display values stored in private data members
			cout << endl << "Today is ";
			today.displayDate();
			cout << "." << endl;

			//update values stored in private data members, then
			//display the updated values
			today.updateDate();
			cout << "Tomorrow is ";
			today.displayDate();
			cout << "." << endl;
		}   //end if
	}   //end if

	//system("pause");
	return 0;
}	//end of main function
