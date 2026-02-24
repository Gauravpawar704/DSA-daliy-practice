#include <iostream>
using namespace std;
int main()
{
    int stack[5] = {10, 20, 30};
    int top = 2;

    if (top == -1)
    {
        cout << "stack empty";
    }
    else
    {
        cout << "Top element: " << stack[top];
    }
    return 0;
}
