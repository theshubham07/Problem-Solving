/* Pattern Printing
    A
    B C
    C D E 
    D E F G
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    int i = 1;
    while (i <= num)
    {
        int j = 1;
        char ch = 'A' + i - j;
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