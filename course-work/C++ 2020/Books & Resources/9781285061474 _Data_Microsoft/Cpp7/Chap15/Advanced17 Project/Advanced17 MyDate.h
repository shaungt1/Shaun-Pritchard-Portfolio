//Advanced17 MyDate.h
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

//declaration section
class MyDate
{
public:
	MyDate();
	void setDate(int, int, int);
	void displayDate();
	void updateDate();
private:
	int month;
	int day;
	int year;
};

//implementation section
MyDate::MyDate()
{
	month = 0;
	day   = 0;
	year  = 0;
} //end of default constructor

void MyDate::setDate(int n1,int n2, int n3)
{
	month = n1;
	day   = n2;
	year  = n3;
} //end of setDate method

void MyDate::displayDate()
{
	cout << month << "/" << day << "/" << year;
} //end of displayDate method

void MyDate::updateDate()
{
	day += 1;
} //end of updateDate method
