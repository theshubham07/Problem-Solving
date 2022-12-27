/*
   Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
*/
#include<iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter the coordinates of x-axis: " << endl;
    cin >> x;
    cout << "Enter the coordinates of y-axis: " << endl;
    cin >> y;
    if(x>0 && y>0)
      cout << "It is in first quadrant";
    else if(x<0 && y>0)
       cout << "It is in second quadrant";
    else if(x<0 && y<0)
       cout << "It is in third quadrant";  
    else if(x>0 && y<0)
       cout << "It is in fourth quadrant";          
}