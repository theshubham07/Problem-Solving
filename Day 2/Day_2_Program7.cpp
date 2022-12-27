/*  Pattern Printing
          1
        2 1 2
      3 2 1 2 3
    4 3 2 1 2 3 4
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
        // printing the space
        int space = num - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        // printing first half pattern
        int j = 1;
        int prnt1 = i;
        while (j <= i)
        {
            cout << prnt1;
            prnt1 = prnt1 - 1;
            j++;
        }
        // printing the other half pattern
        int k = 1;
        int prnt2 = num - k - 1;
        while (k < i)
        {
            cout << prnt2;
            prnt2 = prnt2 + 1;
            k++;
        }
        i++;
        cout << endl;
    }
    return 0;
}