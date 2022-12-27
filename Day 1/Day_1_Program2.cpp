// find the largest number among the three numbers entered by the user.
#include<iostream>
using namespace std;
int main()
{
    int a, b,c;
    cout << "Enter three numbers: " << " ";
    cin >> a >> b >> c;
    if(a>b && a>c)
         cout << "The greatest number is: " << a << endl;
    if(b>c && b>a)
         cout << "The greatest number is: " << b << endl;
    else
         cout << "The greatest number is: " << c << endl;          
}