#include <iostream>
using namespace std;

int main()
{
    int queue[5];
    int front = -1;
    int rear = -1;
    int x;

    if (rear == 4)
    {
        cout << "Queue Overflow";
    }
    else
    {
        if (front == -1)
        {
            front = 0;
            cout << "Enter value: ";
            cin >> x;
            rear++;
            queue[rear] = x;
        }
    }
    return 0;
}
