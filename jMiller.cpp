// Program 1-1 from the book calculates user's pay.

#include <iostream>
using namespace std;

int main()
{
    double hours, rate, pay;
    string buffer;
    cout << "How many hours did you work? ";
    cin >> hours;
    
    cout << "How much do you get paid per hour? ";
    cin >> rate;
    
    pay = hours * rate;
    cout << "You have earned $" << pay << endl;
    cin >> buffer; // only serves to prevent cmd prompt from exiting too fast
    return 0;
}
