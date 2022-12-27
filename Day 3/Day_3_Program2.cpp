// Write a program to find the sum of the series using the function -> 1!/1+2!/2+3!/3+4!/4+5!/5

#include <iostream>
using namespace std;
int fact(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int terms;
    cout << "Enter the number of terms: " << " ";
    cin >> terms;
    int sum = 0;
    for (int i = 1; i <= terms; i++)
    {
        sum = sum + (fact(i) / i);
    }
    cout << "The sum of series is: " << sum << endl;
    return 0;
}