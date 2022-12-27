// Program for finding length of a string (User defined function)
#include<iostream>
using namespace std;
int len_str(char *p)
{
    int count = 0;
    while(*p != '\0')
    {
        p++;
        count++;
    }
    return count;
}
int main()
{
    char name[100];
    int length;
    cout <<  "Enter your string" << endl;
    cin.get(name,100);
    length = len_str(name);
    cout << "The length of string is: " << length << endl;
}