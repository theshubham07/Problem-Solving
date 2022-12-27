// Program for reversing the given string (User defined function)
#include<iostream>
using namespace std;
void reverse_str(char *p)
{
    char *q , r;
    q = p;
    int count = 0;
    while(*q != '\0')
    {
        q++;
        count++;
    }
    q--;
    while(p < q)
    {
         r = *p;
        *p = *q;
        *q = r;
         p++;
         q--;
    }
    for(int i = 0; i < count; i++)
    {
        cout << q[i];
    }
}
int main()
{
    char array[100];
    int i = 0;
    int j = 0;
    cout << "Enter a string: " << endl;
    cin.get(array,100);
    cout << "Your reverse string is: " << endl;
    reverse_str(array);
}