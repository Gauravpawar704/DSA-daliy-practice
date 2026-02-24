#include <iostream>
using namespace std;

int stack[100];
int top = -1;

void push(int x)
{
    top++;
    stack[top] = x;
}

void pop()
{
    top--;
}

int main()
{
    push(20);
    push(12);
    push(30);
    pop();
    if(top==-1){
        cout<<"Stack empty";
    }
    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << " ";
    }
    return 0;
}
