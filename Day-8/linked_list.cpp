#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void insertAtBeginning()
{
    int x;
    cout << "Enter value: ";
    cin >> x;

    Node *newNode = new Node();
    newNode->data = x;
    newNode->next = head;

    head = newNode;
}

void insertAtEnd()
{
    int x;
    cout << "Enter value: ";
    cin >> x;

    Node *newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display()
{
    Node *temp = head;

    if (temp == NULL)
    {
        cout << "Linked list is empty\n";
        return;
    }
    cout << "Linked List: ";
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main()
{
    int choice;
    do
    {
        cout << "\n1. Insert at Beginning: ";
        cout << "\n2. Display: ";
        cout << "\n3. Exit: ";
        cout << "\n Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            insertAtEnd();
            break;

        case 2:
            display();
            break;

        case 3:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }
    } while (choice != 3);
    return 0;
}
