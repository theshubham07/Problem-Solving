// You have been an integer value N. Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,5,7.......8,6,4,2.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: "
         << " ";
    cin >> n;
    int arr[n];
    int dupli[n], count = 1, count2;
    if (n % 2 == 0)
    {
        count2 = n;
        for (int i = 0; i < n; i++)
        {
            dupli[i] = count;
            count = count + 2;
        }
        for (int i = n / 2; i < n; i++)
        {
            dupli[i] = count2;
            count2 = count2 - 2;
        }
    }
    else
    {
        count2 = n - 1;
        for (int i = 0; i < n; i++)
        {
            dupli[i] = count;
            count = count + 2;
        }
        for (int i = n / 2 + 1; i < n; i++)
        {
            dupli[i] = count2;
            count2 = count2 - 2;
        }
    }
    cout << "Pattern is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << dupli[i] << " ";
    }
}
