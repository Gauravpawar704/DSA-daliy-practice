#include <iostream>
using namespace std;
int main()
{
    int queue[5] = {10, 20, 30};
    int front = 0;
    int rear = 2;

    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << " ";
    }
    return 0;
}
