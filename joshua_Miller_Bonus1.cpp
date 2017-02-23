// Calculating the number of acres in a set number of feet

#include <iostream>
using namespace std;

int main(){
	
	const int ACRE = 43560; //the constant for number of acres
	float sqFeet = 391876; //feet
	float result;
	
	result = float(sqFeet/ACRE); // division
	cout << "The number of acres in " << sqFeet << "sq ft is " << result;
	
	return 0;
}
