/*
	Joshua Miller
	
	Program for prompting user for information for a 
*/

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main()
{
	// Variable setup for the program
	string name, address, city, state;
	int zip,words, given, change, total;
	float amt5, amtSingle; //stores the amount charged
	
	
	// Prompt the user for input
	cout << "Enter the name of the customer: ";
	getline(cin, name);
	
	cout << "Enter the street address: ";
	getline(cin, address);
	
	cout << "Enter city: ";
	getline(cin, city);
	
	cout << "Enter State: ";
	getline(cin, state);
	
	cout << "Enter zip code: ";
	cin >> zip;
	
	cout << "Enter the number of words sent: ";
	cin >> words;
	
	//Output the customer information;
	cout << endl << endl << name << endl << address;
	cout << endl << city << ", " << state << " " << zip; 
	// Process the input
		// First we'll process the word count
		amt5 = (words / 5) * 1.5;
		amtSingle = (words % 5) *.5;
		
		cout << endl << setprecision(4) << showpoint << amt5+ amtSingle;
		total = (amt5+ amtSingle) * 100;
	
	//output amount owed
	
	cout << endl << setprecision(4) << showpoint << amt5+ amtSingle;
	cout << endl << endl << "Enter the amount recieved from the customer: ";
	cin >> given;
	
	given = given - total;	
	
		//Next calculate the amountof change owed
		cout << "Denomination            Number";
		cout << endl << "--------------              ---------------";
		change = given/100;
		total %= 100;
		cout << setw(14) << "Dollars" << setw(14) <<change << endl;
		change = given /25;
		total %= 25;
		cout << setw(14) << "Quarters"<< setw(14) << change<< endl;
		change = given /10;
		total %= 10;
		cout << setw(14) << "Dimes"<< setw(14) << change << endl;
		change = given /5;
		total %= 5;
		cout << setw(14) << "Nickels"<< setw(14) << change << endl;
		change = given;
		cout << setw(14) << "Pennies"<< setw(14) << change << endl;
	
	
	//output
	
	
	return 0;
}
