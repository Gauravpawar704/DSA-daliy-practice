#include <iostream>
using namespace std;
int main()
{
    int queue[5] = {1000, 20, 30};
    int front = 0;
    int rear = 2;

    if (front > rear)
    {
        cout << "Queue Underflow";
    }
    else
    {
        cout << "Deleted: " << queue[front];
        front++;
    }
    return 0;
}
