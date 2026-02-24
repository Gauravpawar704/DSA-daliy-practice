#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value for reverse: ";
    cin >> n;

    int stack[100];
    int arr[100];
    int top = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        stack[++top] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = stack[top--];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
