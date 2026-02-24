#include <iostream>
using namespace std;
int stack[100];
int top = -1;
int n=5;

void push(int value)
{
    if (top == n - 1)
    {
        cout << "Stack overflow";
    }
    else
    {
        top++;
        stack[top] = value;
        cout << value << "\tpushed into stack."<<"\n" ;
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
        cout << stack[top] << "popped into stack."<<"\n";
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        cout << "Stack is empty";
    }
    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << " ";
    }
    cout << endl;
}
int main()
{
    push(10);
    push(30);
    push(50);
    display();
    pop();
    display();

    return 0;
}
