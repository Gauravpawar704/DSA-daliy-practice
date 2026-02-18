#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];
    int key;// key is use for search 
    int count = 0;

    cout << "Enter a elements: ";
    cin >> n;

    cout << "Enter a numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter elements to count: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << " Frequecy not found.";
    }
    else
    {
        cout << "Frequency: " << count;
    }
}
