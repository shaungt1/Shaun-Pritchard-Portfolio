
/*
Author: Shaun Pritchard
Date: 02-06-2020
FileName: main.cpp
Purpose: source out functions to Modularize the program functions to sort accending, descending and to search.
Output: Outputs various information based on input values float, integer, and string values.
Exceptions: None.

*/
// Modularize the phone book program
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip> 


using namespace std;
// Define input values
string name [3];
long long phoneNumber[3];
int size=3;
// user input data function
void inputData(){
   
    // Get input from the user- name and phone number
   
    for(int i=0; i < size; i++){
        cout <<"Enter the "<< i+1<<" person's name: ";
        getline(cin, name[i]);
       
        cout<<"\nEnter the "<< i+1<<" person's phone number: ";
        cin>>phoneNumber[i];
        cin.ignore();
    }
}

// sort function in accending order
void sortAData(){
       
    // Sort the data in ascending order based on the phone number
int sort;
    for(int i = 0; i < size; i++)
    {
        sort = i;
        for(int j = i+1; j < size; j++)
        {
            if(phoneNumber[j] < phoneNumber[sort])
                sort = j;
            }
                if(sort != i)
                {
   //swap both name and phoneNumber values together
                    string temp = name[i];
                    name[i] = name[sort];
                    name[sort] = temp;
  
                    long long temp2 = phoneNumber[i];
                    phoneNumber[i] = phoneNumber[sort];
                    phoneNumber[sort] = temp2;
                }
    }
}


// sort function in descending order
void sortDData(){
       
    // Sort the data in ascending order based on the phone number
int sort;
    for(int i = 0; i < size; i++)
    {
        sort = i;
        for(int j = i+1; j < size; j++)
        {
            if(phoneNumber[j] > phoneNumber[sort])
                sort = j;
            }
                if(sort != i)
                {
   //swap both name and phoneNumber values together
                    string temp = name[i];
                    name[i] = name[sort];
                    name[sort] = temp;
  
                    long long temp2 = phoneNumber[i];
                    phoneNumber[i] = phoneNumber[sort];
                    phoneNumber[sort] = temp2;
                }
    }
}

// Print Data function
void printData(){
    // Print the input name and phone number after sorting.
   
    for (int i=0; i < size; i++){
        cout <<name[i]<<'\t'<< phoneNumber[i]<<endl;
    }
}

// Search function
void SearchData(){
    // Get the search term from the user
  long long search;
   cout << "Enter a phone number to search: ";
   cin >> search;
   
   int numSearch = -1;
        for(int i = 0; i < size; i++)
        {
            if(phoneNumber[i] == search) //if number is found save to varible array
            {
             numSearch = i;
             break;
            }
        }
    //Search the array
        if(numSearch == -1)
        cout << "number not found" << endl;
            else
        cout << "Name: " << name[numSearch] << "\nPhone: " << fixed << setprecision(2) << phoneNumber[numSearch] << endl;
}

int main()
{
    int choice;
    while(1){
        cout <<"\n\nPress 1 for Input data: "<<endl;
        cout <<"Press 2 to sort data in ascending order: "<<endl;
        cout <<"Press 3 to sort data in descending order: "<<endl;
        cout <<"Press 4 to print all data: "<<endl;
        cout <<"Press 5 to search for an individual in the phone book: "<<endl;
        cout <<"Press 6 to end the program: "<<endl;
        cin>>choice;
        cout<<"\n\n"<<endl;
       
        switch (choice)
        {
            case 1:
            cin.ignore();
            inputData();
            break;
            case 2:
            // Call sort furnction (ascending order)
            sortAData();
            case 3:
            // Call sort function (descending order)
            sortDData();
            case 4:
            printData();
            break;
            case 5:
            // Call the search function
            SearchData();
            case 6:
            return 0;
            break;
            default:
            ;
        }
    }
return 0;
}