/*
Author: Shaun Pritchard
Date: 01-16-2020
FileName: driving.cpp
Purpose: Discusses and demonstrates how to take user input to trigger nested structures
Output: Outputs various information based on input values.
Exceptions: mod-2.
*/


#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
int i = 0;

// Determine traffic light color indicator loop
while(true)
{
cout << "**" <<"Is the traffic light RED?, If so enter 1, If it is YELLOW  enter 2, if it is GREEN enter 3!" << endl;
cin >> i;
if(i == 1)
{
cout << "The traffic light is RED! The self-driving car will wait \n";
exit(0);
}
else if(i==2)
{
cout << "The traffic light is YELLOW! The self-driving car will wait \n";
exit(0);
}
else if(i == 3)
{
cout << "The traffic light is GREEN! The self-driving car will GO!!! \n";    
break;
}
else
{
cout << "Sorry please enter 1 or 2 or 3!\n";
}
}

// On-comming traffic indicator loop
while(true)
{
cout << "**" <<"Is there on comming trafic? if YES enter 1 - if NO enter 2!" << endl;
cin >> i;
if(i == 1)
{
cout << "Sorry the self-driving car has to wait for oncomming traffic!\n";
exit(0);
}
else if(i == 2)
{
break;
}
else
{
cout << "Invalid command, please enter 1 or 2!\n";
}
}

// Turn-signal indicator loop
while(true)
{
cout << "**" <<" Are you turning LEFT? If so enter 1, If you are turning RIGHT enter 2, If you are STOPING press 3 " << endl;
cin >> i;
if(i == 1)
{
cout << "The self-driving car is turning LEFT!\n";
exit(0);
}
else if(i==2)
{
cout << "The self-driving is turning RIGHT!\n";
exit(0);
}
else if(i == 3)
{
cout << "The self-driving car will now STOP\n";
exit(0);
}
else
{
cout << "Invalid input, please enter 1 or 2 or 3!\n";
}
}
return 0;
}