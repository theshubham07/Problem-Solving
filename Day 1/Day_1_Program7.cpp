/*
Write a C program to read temperature in centigrade and display a suitable message according to temperature state below :
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
*/
#include <iostream>
using namespace std;
int main()
{
     float temp;
     cout << "Enter the temperature in degree celsius" << endl;
     cin >> temp;
     if (temp < 0)
          cout << "Freezing Weather" << endl;
     else if (temp > 0 && temp < 10)
          cout << "Very Cold Weather" << endl;
     else if (temp >= 10 && temp < 20)
          cout << "Cold Weather" << endl;
     else if (temp >= 20 && temp < 30)
          cout << "Normal" << endl;
     else if (temp >= 30 && temp < 40)
          cout << "Hot" << endl;
     else if (temp >= 40)
          cout << "Vey Hot" << endl;
}