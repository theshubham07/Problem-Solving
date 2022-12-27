/*   Pattern Printing
          1
        2 3 2
      3 4 5 4 3
    4 5 6 7 6 5 4
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
        // printing first half pattern
        int j = 1;
        while (j <= i)
        {
            cout << i + j - 1;
            j++;
        }
        // printing second half pattern
        int k = 1;
        int prnt = 2*(i + k) - num;
        while (k < i)
        {
            cout << prnt;
            prnt = prnt - 1;
            k++;
        } 
        i++;
        cout << endl;
    }
    return 0;
}