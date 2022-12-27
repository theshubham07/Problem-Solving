/*  Pattern Printing
         *
        ***
       *****
      *******
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
        // printing space
        int space = num - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        // printing the first half of pattern
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        // printing second half of pattern
        int k = 1;
        while (k < i)
        {
            cout << "*";
            k++;
        }
        i++;
        cout << endl;
    }
    return 0;
}