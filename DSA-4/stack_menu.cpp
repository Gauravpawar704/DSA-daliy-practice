#include <iostream>
using namespace std;
int stack[100];
int top = -1;
int n = 5;

void push()
{
    int x;
    if (top == n - 1)
    {
        cout << "Stack overflow";
    }
    else
    {
        cout << "Enter value: ";
        cin >> x;
        top++;
        stack[top] = x;  
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack underflow";
    }
    else
    {
        cout << stack[top] << "Popped\n";
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        cout << "Stack empty";
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
            cout << endl;
        }
    }
}

int main()
{
    int choice;
    do
    {
        cout << "\n 1.push 2.pop 3.display 4.exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        }
    } while (choice != 4);
    return 0;
}
