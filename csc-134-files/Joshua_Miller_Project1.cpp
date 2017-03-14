/*
	Joshua Miller

	Program for prompting user for information for
	a telegram bill
*/

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main()
{
	//variables
	string cName, stAddress, city, state;
	int zip, wordsSent, recieved, change;
	float total;
	const float fiveBlock = 1.50;
	const float singleBlock = 0.50;

	//input
	cout << "Enter the name of the customer: ";
	getline(cin, cName);

	cout << "Enter street address: ";
	getline(cin, stAddress);

	cout << "Enter city: ";
	getline(cin, city);

	cout << "Enter state: ";
	getline(cin, state);

	cout << "Enter zip code: ";
	cin >> zip;

	cout << "Enter the number of words sent: ";
	cin >> wordsSent;
	total = ((wordsSent /5) * fiveBlock) + ((wordsSent %5) *singleBlock);

	cout << endl << cName << endl << stAddress << endl;
	cout << city << ", " << state << " " << zip << endl;
	cout << "Amount Owed: $" << setprecision(2) << fixed << total << endl << endl;

	cout << "Enter the amount recieved from the customer: ";
	cin >> recieved;

	change = recieved - (total * 100);

		cout << "Denomination                     Number" << endl;
		cout << "--------------              ---------------" << endl;
    cout << "   Dollars                        " << change /100 << endl;
		change %= 100;
		cout << "  Quarters                       " << change / 25 << endl;
		change %= 25;
		cout << "    Dimes                         " << change / 10 << endl;
		change %= 10;
		cout << "   Nickels                        " << change / 5 << endl;
		change %= 5;
		cout << "   Pennies                        " << change << endl;




	return 0;
}
