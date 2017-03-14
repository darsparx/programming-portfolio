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
	char letter;
	int zip, wordsSent, recieved, change, choice;
	float total;
	const float fiveBlock = 1.50;
	const float singleBlock = 0.50;

	//input
	cout << "Welcome to Western Union Telegraph Company" << endl;
	cout << "1 - Process Telegram Bill" << endl << "2 - Translate to Morse Code";
	cout << endl << endl;

	cout << "Enter your choice: ";
	cin >> choice;

	switch (choice) {
		case 1:
			cout << "Enter the name of the customer: ";
			cin >> cName;
			cout << "\n";
			cout << "Enter the customer's address: ";
			getline(cin, stAddress);

			cout << endl << "Enter city: ";
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
			if (recieved >= total) {
			change = recieved - (total * 100);

				cout << " Denomination                    Number" << endl;
				cout << "--------------              ---------------" << endl;
		    cout << "   Dollars                        " << change /100 << endl;
				change %= 100;
				cout << "   Quarters                       " << change / 25 << endl;
				change %= 25;
				cout << "    Dimes                         " << change / 10 << endl;
				change %= 10;
				cout << "   Nickels                        " << change / 5 << endl;
				change %= 5;
				cout << "   Pennies                        " << change << endl;
			}
			else
			{
				cout << "Sorry this customer has not paid enough.";
			}
			break;

		case 2: cout << endl << "Enter a single letter: ";
			cin >> letter;
			if (!(letter >= 'a' || letter <= 'z') || !(letter >= 'A' && letter <= 'Z')){
				cout << "Sorry I can't convert that" << endl << endl;
				}
			else if (letter == 'A' || letter == 'a')
			{
				cout << "The letter " << letter << " translates to .-" << endl << endl;
			}
			else if (letter == 'B' || letter == 'b')
			{
				cout << "The letter " << letter << " translates to -..." << endl << endl;
			}
			else if (letter == 'C' || letter == 'c')
			{
				cout << "The letter " << letter << " translates to -.-." << endl << endl;
			}
			else if (letter == 'D' || letter == 'd')
			{
				cout << "The letter " << letter << " translates to -.." << endl << endl;
			}
			else if (letter == 'E' || letter == 'e')
			{
				cout << "The letter " << letter << " translates to ." << endl << endl;
			}
			else if (letter == 'F' || letter == 'f')
			{
				cout << "The letter " << letter << " translates to ..-." << endl << endl;
			}
			else if (letter == 'G' || letter == 'g')
			{
				cout << "The letter " << letter << " translates to --." << endl << endl;
			}
			else if (letter == 'H' || letter == 'h')
			{
				cout << "The letter " << letter << " translates to ...." << endl << endl;
			}
			else if (letter == 'I' || letter == 'i')
			{
				cout << "The letter " << letter << " translates to .." << endl << endl;
			}
			else if (letter == 'J' || letter == 'j')
			{
				cout << "The letter " << letter << " translates to .---" << endl << endl;
			}
			else if (letter == 'K' || letter == 'k')
			{
				cout << "The letter " << letter << " translates to -.-" << endl << endl;
			}
			else if (letter == 'L' || letter == 'l')
			{
				cout << "The letter " << letter << " translates to .-.." << endl << endl;
			}
			else if (letter == 'M' || letter == 'm')
			{
				cout << "The letter " << letter << " translates to --" << endl << endl;
			}
			else if (letter == 'N' || letter == 'n')
			{
				cout << "The letter " << letter << " translates to -." << endl << endl;
			}
			else if (letter == 'O' || letter == 'o')
			{
				cout << "The letter " << letter << " translates to ---" << endl << endl;
			}
			else if (letter == 'P' || letter == 'p')
			{
				cout << "The letter " << letter << " translates to .--." << endl << endl;
			}
			else if (letter == 'Q' || letter == 'q')
			{
				cout << "The letter " << letter << " translates to " << endl << endl;
			}
			else if (letter == 'R' || letter == 'r')
			{
				cout << "The letter " << letter << " translates to .-." << endl << endl;
			}
			else if (letter == 'S' || letter == 's')
			{
				cout << "The letter " << letter << " translates to ..." << endl << endl;
			}
			else if (letter == 'T' || letter == 't')
			{
				cout << "The letter " << letter << " translates to -" << endl << endl;
			}
			else if (letter == 'U' || letter == 'u')
			{
				cout << "The letter " << letter << " translates to ..-" << endl << endl;
			}
			else if (letter == 'V' || letter == 'v')
			{
				cout << "The letter " << letter << " translates to " << endl << endl;
			}
			else if (letter == 'W' || letter == 'w')
			{
				cout << "The letter " << letter << " translates to .--" << endl << endl;
			}
			else if (letter == 'X' || letter == 'x')
			{
				cout << "The letter " << letter << " translates to -..-" << endl << endl;
			}
			else if (letter == 'Y' || letter == 'y')
			{
				cout << "The letter " << letter << " translates to -.--" << endl << endl;
			}
			else if (letter == 'Z' || letter == 'z')
			{
				cout << "The letter " << letter << " translates to -.--" << endl << endl;
			}
			break;

		default: cout << "Sorry " << choice << " is not a valid choice." << endl;
			break;
	}
	return 0;
}
