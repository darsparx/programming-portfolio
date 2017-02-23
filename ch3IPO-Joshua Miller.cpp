#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int usrNum;
	string result= "";
	
	//User Input of number 1-8;
	cout << "Welcome please enter a number:between 1-8";
	cin >> usrNum;
	
	result += usrNum /8;
	usrNum = usrNum%8;
	
	result += usrNum/6;
	usrNum %= 6;
	
	result += usrNum/2;
	usrNum %= 2;
	
	result += usrNum/1;
	
	cout << endl << setfill('0') << setw(5) << result << endl;
	
	
	
	return 0;
}
