// Write a program to find the sum of the series using the function -> 1+ x + x2/2! + x3/3! + x4/4!......
 #include <iostream>
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
    float sum = 1 + x;
    for(int i = 2; i < terms; i++)
    {
         sum = sum + (float)power(x,i)/fact(i);
    }
    cout << "The sum of the series is: " << sum << endl;
}