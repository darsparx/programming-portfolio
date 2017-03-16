#include <iostream>
using namespace std;

int main()
{
	int usrInput;

	cout << "      Welcome to my game!" << endl;
	cout <<  "1.) Start" << endl << "2.) Exit" << endl;
	cin >> usrInput;
	switch (usrInput) //game menu
	{
		case 1: cout << "Welcome to your doom!" << endl;
			break;
		case 2: cout << "See you later!" << endl;
			break;
		default: cout << "Sorry that's not a valid choice" << endl;
	}
	return 0;
}
