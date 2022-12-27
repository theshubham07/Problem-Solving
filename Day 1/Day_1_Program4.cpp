// check whether the year entered by the user is a leap year or not.
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter a year: " << " ";
    cin >> year;
    if ((year % 100 != 0 && year % 4 == 0 ) || year % 400 == 0)
        cout << "Entered year is a leap year" << endl;
    else
       cout << "Entered year is not a leap year" << endl;  
}