/*   Pattern Printing
        1
        23
        345
        4567
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:" << " ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int prnt = i;
        int j = 1;
        while (j <= i)
        {
            cout << prnt << " ";
            j++;
            prnt++;
        }
        i++;
        cout << endl;
    }
}