// Sum of the series -> x- x3/3! + x5/5! - x7/7!........ 
#include<iostream>
using namespace std;
// Function for calculating factorial
int fact(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
// Function for calculating power
int power(int a, int b)
{
    int pow = 1;
    for(int i = 1; i <=b; i++)
          pow = a * pow;
    return pow;      
}
int main()
{
    int terms, x;
    cout << "Enter the number of terms: " << " ";
    cin >> terms;
    cout << "Enter the value of x: " << " ";
    cin >> x;
    float sum = x;
    int count = 3;
    for(int i = 1; i < terms; i=i+1)
    {
        if(i%2 != 0)
        {
            sum = sum - (float)power(x,count)/fact(count);
            count = count + 2;
        }
        else
        {
            sum = sum + (float)power(x,count)/fact(count);
            count = count + 2;
        }
    }
    cout << "The sum of the series is: " << sum << endl;
}