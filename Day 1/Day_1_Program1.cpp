/*
    Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon 
    which the total salary is calculated as -totalSalary = basic + hra + da + allow – pf. where : hra = 20% of basic, da = 50% of basic, allow = 1700 if grade = ‘A’, 
    allow = 1500 if grade = ‘B’, allow = 1300 if grade = ‘C' or any other character, pf = 11% of basic. Round off the total salary and then print the integral part only.
*/
#include<iostream>
using namespace std;
int main()
{
    int basic_sal;
    char grade;
    cout <<"Enter your basic salary: " << " ";
    cin >> basic_sal;
    cout << "Enter your grade: " << " ";
    cin >> grade;
    float hra = 0.20 * basic_sal;
    float da = 0.50 * basic_sal;
    float pf = 0.11 * basic_sal;
    int allow;
    if(grade=='A')
          allow = 1700;
    if(grade=='B')
          allow = 1500;  
    else 
       allow = 1300;
    int total_sal = basic_sal + hra + da + allow - pf;
    cout << "The total salary of the employee is: " << total_sal << endl;             
}