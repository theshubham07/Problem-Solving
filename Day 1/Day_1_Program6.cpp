// Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter the sides of triangle: " << " ";
    cin >> a >> b >> c;
    if(a != b && b != c && a!= c)
        cout << "Triangle is scalene" << endl;
    else if(a==b && b==c && c==a)
       cout << "Triangle is equilateral" << endl;
    else 
       cout << "Triangle is isosceles" << endl;     
}