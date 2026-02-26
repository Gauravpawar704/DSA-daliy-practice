#include <iostream>
using namespace std;
int deque[5];
int front = -1;
int rear = -1;

void insertRear()
{
    int x;
    cout << "Enter value: ";
    cin >> x;
    if ((rear + 1) % 5 == front)
    {
        cout << "Queque overflow\n";
    }
    else if (front == -1)
    {
        front = rear = 0;
        deque[rear] = x;
    }
    else
    {
        rear = (rear + 1) % 5;
        deque[rear] = x;
    }
}
void deleteFront()
{
    if (front == -1)
    {
        cout << "Queue underflow\n";
    }
    else if (front == rear)
    {
        cout << deque[front] << "deleted\n";
        front = -1;
        rear = -1;
    }
    else
    {
        cout << deque[front] << "Deleted\n";
        front = (front + 1) % 5;
    }
}
void display()
{
    if (front == -1)
    {
        cout << "Queue empty\n";
    }
    else if (front <= rear)
    {
        for (int i = front; i <= rear; i++)
        {
            cout << deque[i] << " ";
        }
    }
    else
    {
        for (int i = front; i < 5; i++)
        {
            cout << deque[i] << " ";
        }
        for (int i = 0; i <= rear; i++)
        {
            cout << deque[i] << " ";
        }
    }
}
int main()
{
    int choice;

    do
    {    cout << "1. insertRear 2.deleteFront 3.Display 4.Exit\n";
          cin >> choice;
        switch (choice)
        {
        case 1:
            insertRear();
            break;
        case 2:
            deleteFront();
            break;
        case 3:
            display();
            break;
        }
    } while (choice != 4);
}
