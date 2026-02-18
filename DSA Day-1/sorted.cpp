#include <iostream>
using namespace std;
bool isSorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    int arr[100];
    cout << "Enter a elemets: ";
    cin >> n;

    cout << "Enter a numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (isSorted(arr, n))
    {
        cout << "Array is Sorted.";
    }
    else
    {
        cout << "Array is Not sorted.";
    }
}
