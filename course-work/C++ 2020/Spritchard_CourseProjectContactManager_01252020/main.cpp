
/*
Author: Shaun Pritchard
Date: 02-01-2020
FileName: main.cpp
Purpose: Contact manager to create, sort, list, delete, add data, and read contact information susch as name, number, email, and address.
Output: Outputs various information based on input values float, integer, and string values.
Exceptions: None.

*/

#include<fstream>
#include<conio.h>
#include<string.h>
#include<iomanip>
#include<iostream>
 
using namespace std;
 // create arrays to store contact values
class contact
{
	long phone; // declare phone varible
    char name[20],address[20],email[30]; // set 3 parallel  arrays to store user input
	
	public: //declare public class
 
 // build contact function
	void createContact()
	{
	    
	    cout<<"Name: ";
        cin.ignore(); // clear char from inoput buffer
        cin>>name; // user data enter name
            
        cout<<"Email address: ";
        cin.ignore(); // clear char from inoput buffer
        cin>>email; // user data enter email
            
        cout<<"Phone: ";
        cin>>phone; // user data enter phone number
            
        cout<<"Address: ";
        cin.ignore(); // clear char from inoput buffer
        cin>>address; // user data enter address
 
            cout<<"\n"; // output new line
	}
	
	void showContact() // display user contact info
	{
	    cout<<endl<<"Name: "<<name; 
		cout<<endl<<"Phone #: "<<phone;
		cout<<endl<<"Email : "<<email;
		cout<<endl<<"Address: "<<address;
		
	}
	
	// call funtions to get contact data objects
	
	char* getName() // pointer to getName function
	{
		return name; // return object
	}
	
	long getPhone()  // pointer to getPhone function
	{
		return phone; // return object
	}
	
	char* getEmail() // pointer to getEmail function
	{
		return email; // return object
	}
	
	char* getAddress()  // pointer to getAddress function
	{
		return address; // return object
	} 
	

}; 
 
 // use fstream to save contact data to binary system file
fstream fs; // create fstream 
contact cont; // create  constructor for contact class varible

// Save contact function
void saveContact()
{
	fs.open("contactDB.txt",ios::out|ios::app); // use filestream to to open bianary text file
	cont.createContact(); // constructor call create contact function which will store data in arrays
	fs.write((char*)&cont,sizeof(contact)); //write array data to file via pointer
	fs.close(); // close fstream file
	cout<<endl<<endl<<"Contact Created..."; // display user message
	getchar();
}
 
// Show all contacts 
void showContact()
{
	system("cls"); // clear  screen and return cursor to top left screen
	 cout<<"\n\t\t  \n\t\t\tContact List\n\t\t  \n";
	fs.open("contactDB.txt",ios::in); // call open filestream text file
	while(fs.read((char*)&cont,sizeof(contact))) //loop through contact array via  pointer
	{
		cont.showContact(); // call show contact function and display contacts
		cout<<endl<<" - \n"<<endl;
	}
	fs.close(); // close filestream
}
 
 
void displayContact(int number) //show individsual contact
{
	bool found; // true or false if contact found
	int ch;
 
		 found=false;
	fs.open("contactDB.txt",ios::in); 
	while(fs.read((char*)&cont,sizeof(contact)))  //loop through contact array via  pointer
	{
		if(cont.getPhone()==number) // If phone number matches user input loop through getPhone funtion
		{
			system("cls"); // clear  screen and return cursor to top left screen
			cont.showContact(); // call show contact funtion
			found=true; // is true
		}
	}
	
	fs.close(); //Close File stream binary file if found var is false
	if(found == false){
	cout<<"\n\nSorry No Contact...";}
	
	    
	getchar(); // get refereance to pointer system function
}
 
 // edit contact function
void editContact()
{
	int number;
	bool found=false;
	system("cls"); // clear  screen and return cursor to top left screen
	cout<<"Edit contact\n\n\n\tEnter the phone number of contact you want to edit:"; 
    cin>>number; // get user input data
	
	fs.open("contactDB.txt",ios::in|ios::out); // open filestream
	while(fs.read((char*)&cont,sizeof(contact)) && found==false) //loop through contact data in text file via  pointer
	{
		if(cont.getPhone()==number) // if number is true call getPhone function
		{
			cont.showContact(); // call show contact function
            cout<<"\n Edit contact information: "<<endl; // display user message
			cont.createContact(); // call create contact function loop through object arrays
			int pos=-1*sizeof(cont); // find position og contact number and
			fs.seekp(pos,ios::cur);  // set the position of the pointer in the output sequence
			fs.write((char*)&cont,sizeof(cont)); // set pointer to write to text file
			cout<<endl<<endl<<"\t Contact changed"; // show user message
			found=true; // found is true
		}
	}
	fs.close(); // end loop close
	if(found==false) // else no contact number found end while
		cout<<endl<<endl<<"Contact Not Found..."; // display user message no data found
 
 
}
 
 // delete contact function
void deleteContact()
{
	int number;
	system("cls"); // clear  screen and return cursor to top left screen
	cout<<endl<<endl<<"Enter The contact number: "; // get user input
	cin>>number;
	fs.open("contactDB.txt",ios::in|ios::out); //filstream open
	fstream fs2; // declare 2nd fstream to hold temp values to read & write from
	fs2.open("Temp.txt",ios::out); // open temp data file
	fs.seekg(0,ios::beg); //set the position of the pointer in the output sequence
	while(fs.read((char*)&cont,sizeof(contact))) // loop through text file based on object array from the pointer
	{
		if(cont.getPhone()!=number) // if number is true call getPhone function
		{
			fs2.write((char*)&cont,sizeof(contact)); // overwrite data  in file
		}
	}
	fs2.close(); // call temp file close
	fs.close(); // call contactDB close
	remove("contactDB.txt"); // remove line from contactDB
	rename("Temp.txt","contactDB.txt"); // remove line from temp DB
	cout<<endl<<endl<<"\tContact Deleted..."; // display user message contact deleted and end loop
}
 
 // instantiate main function to cal user menu passing int, char pointer, and array params
int main(int argc, char *argv[])
{
    system("cls"); // clear screen

    for(;;)
    {
		    int mainMenu;
    cout<<"\n\t CONTACT MANAGER COURSE PROJECT C++";
    cout<<"\n\t\t\tSelect an option\n\t\t\n\t\t(Press 1 to:) Add a new Contact\n\t\t(Press 2 to:) List all Contacts\n\t\t(Press 3 to:) Search for a contact\n\t\t(Press 4 to:) Edit Contact\n\t\t(Press 5 to:) Delete a Contact\n\t\t(Press 0 to:) Exit\n\t\t";
    cout<<"Enter the choice:";
 
    cin>>mainMenu;
 
    switch(mainMenu)
    {
    	case 0: cout<<"\n\n\t\t Exit contact manager"; // Exit console
    		exit(0);
    	     break;
    	     break;
    	     break;
    	case 1:saveContact(); //Save Contact
    		break;
    	case 2:showContact(); // Sow all contacts created
    		break;
   		case 3:
		    int number;
            system("cls"); // Clear Screen move cursor to upper left corner of the screen
            cout<<"\n\n\tPhone: "; // Search for contact by phone number
            cin>>number;
			displayContact(number); // Display contact bas3ed off search for Phone number
    		break;
    	case 4:editContact();  // edit contact data
    		break;
    	case 5:deleteContact(); // delete contact
    		break;
    	default:
    		break;
    }
    
    
    
 // return to main menu options
	int option;
    cout<<"\n\n\n:Enter the Choice:\n\n\t(1) Return To Main Menu\t\t(0) Exit Contact Manager\n";
 
    cin>>option;
    switch (option)
 
    {
    case 1:
		system("cls"); // clear screen
        continue;
    case 0:
       exit(0); // exit switch case
    }
    	}
        	return 0;
}