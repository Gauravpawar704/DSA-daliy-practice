#include <iostream>
using namespace std;

int queue[5];
int front = -1;
int rear = -1;

void enqueue()
{
   int x;
   if (rear == 4)
   {
      cout << "Queue Overflow\n";
   }
   else
   {
      if (front == -1)
         front = 0;
      {
         cout << "Enter value: ";
         cin >> x;
         rear++;
         queue[rear] = x;
      }
   }
}

void dequeue()
{
   if (front > rear || front == -1)
   {
      cout << "Queue Underflow\n";
   }
   else
   {
      cout << queue[front] << "Deleted\n";
      front++;
   }
}

void display()
{
   if (front > rear || front == -1)
   {
      cout << "Queue Empty\n";
   }
   else
   {
      for (int i = front; i <= rear; i++)
      {
         cout << queue[i] << " ";
         cout << endl;
      }
   }
}

int main()
{
   int choice;
   do
   {
      cout << "\n 1.Enqueu 2.Dequeue 3.Display 4.Exit\n";
      cin >> choice;

      switch (choice)
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
   } while (choice != 4);
}
