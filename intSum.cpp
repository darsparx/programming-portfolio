// Generate random number between 0 and 1000 then calculate sum of those numbers

#include <iostream>

using namespace std;

int main(){
	
	int number, remainder, sum;
	
	cout << "Enter a integer between 0 and 1000:";
	cin >> number;
	
	remainder= number %1000;
	sum = number/ 1000;
	
	number = remainder;
	remainder = number % 100;
	sum += number/100;
	
	number = remainder;
	remainder = number % 10;
	sum += number / 10;
	
	number = remainder;
	
	sum+= number;
	
	cout << "The sum of the digits is: "<< sum;
	
	
	return 0;
}
