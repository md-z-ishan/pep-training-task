#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

// Forward declaration
Node *insertAtEnd(Node *head, int value);

Node *insertAtPosition(Node *head, int value, int position)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (position == 0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node *temp = head;
    for (int i = 0; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Position out of bounds. Inserting at the end." << endl;
        delete newNode; // Free the allocated memory
        return insertAtEnd(head, value);
    }

    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}
Node *insertAtEnd(Node *head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        return head;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}
void traverse(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();

    first->data = 10;
    second->data = 20;
    third->data = 30;

    first->next = second;
    second->next = third;
    third->next = NULL;

    Node *head = first;

    cout << "Before Insertion:\n";
    traverse(head);

    int position = 1; // Example position
    head = insertAtPosition(head, 15, position);

    cout << "\nAfter Insertion at position " << position << ":\n";
    traverse(head);

    return 0;
}