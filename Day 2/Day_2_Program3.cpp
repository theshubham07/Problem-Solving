/*  Pattern Printing
    A
    B B
    C C C
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    int i = 1;
    char ch = 'A';
    while (i <= num)
    {
        int j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            j++;
        }
        i++;
        ch = ch + 1;
        cout << endl;
    }
}