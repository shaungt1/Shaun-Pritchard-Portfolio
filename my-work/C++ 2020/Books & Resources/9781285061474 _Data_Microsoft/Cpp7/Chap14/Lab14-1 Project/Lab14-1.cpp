//Lab14-1.cpp - saves movie titles and release
//years in a sequential access file
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string title = "";
	string year  = "";

	//create file object and open the file
	ofstream outFile;
	outFile.open("movies.txt", ios::out);

	//determine whether the file is open
	if (outFile.is_open())
	{
		//get movie title
		cout << "Movie title (-1 to stop): ";
		getline(cin, title);

		while (title != "-1")
		{
			//get the release year
			cout << "Year released: ";
			getline(cin, year);

			//write the record to the file
			outFile << title << '#' << year << endl;

			//get another movie title
			cout << "Movie title (-1 to stop): ";
			getline(cin, title);
		}  //end while

		//close the file
		outFile.close();
	}
	else
		cout << "The movies.txt file could not be opened." 
		     << endl;
	//end if

	//system("pause");
	return 0;
}	//end of main function