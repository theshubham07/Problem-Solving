/*  Pattern Printing
    E
    D E
    C D E
    B C D E
    A B C D E
*/
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i <= 5)
    {
        int j = 1;
        char ch = 'E' - i + j;
        while (j <= i)
        {
            cout << ch << " ";
            ch = ch + 1;
            j++;
        }
        i++;
        cout << endl;
    }
}