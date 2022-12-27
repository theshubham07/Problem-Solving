// You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array/list.
// You don't need to print or return anything, just change in the input array itself.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the size of array: " << " ";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++)
    {
        int temp = arr[i];
        arr[i] = arr[i + 2];
        arr[i + 2] = temp;
    }
    cout << "The new array is: " << endl;
    for (int i = 0; i < num; i++)
        cout << arr[i] << " ";
}