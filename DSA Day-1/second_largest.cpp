#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];

    cout << "Enter a element: ";
    cin >> n;

    cout << "Enter a numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];
    int second = -99999;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }
    cout << "Second largest number: " << second;
}
