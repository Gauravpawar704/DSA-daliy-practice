#include <iostream>
using namespace std;

int main()
{
    int queue[5];
    int front = -1;
    int rear = -1;

    rear++;
    front++;
    queue[rear] = 10;

    rear++;
    queue[rear] = 20;

    cout << "Deleted: " << queue[front] << endl;
    front++;

    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << " ";
    }
    return 0;
}
