#include <iostream>
using namespace std;
int queue[5];
int front = -1;
int rear = -1;

void enqueue()
{
    int x;
    cout << "Enter value: ";
    cin >> x;
    if ((rear + 1) % 5 == front)
    {
        cout << "Queue overflow";
    }
    else if (front == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear = (rear + 1) % 5;
        queue[rear] = x;
    }
}
void dequeue()
{
    if (front == -1)
    {
        cout << "Queue underflow";
    }
    else if (front == rear)
    {
        cout << queue[front] << "Deleted";
        front = -1;
        rear = -1;
    }
    else
    {
        cout << queue[front] << "Deleted";
        front = (front + 1) % 5;
    }
}
void display()
{
    if (front == -1)
    { 
        cout << "Queue empty";
    }
    else if (front <= rear)
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
    else
    {
        for (int i = front; i < 5; i++)
        {
            cout << queue[i] << " ";
        }
        for (int i = 0; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
    }
}
int main()
{
    int n;
    
    do
    {
        cout << "1.Enqueue 2.Dequeue 3.Display 4.Exit : \n";
        cin >> n;
        switch (n)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        }
    } while (n != 4);
}
