// Find the sum of first n terms of the following series: 1! + 2! + 3! + 4!...................

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
    int n;
    cout << "Enter the value of n:" << " ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + fact(i);
    }
    cout << "THe sum of the series is: " << sum << endl;
    return 0;
}