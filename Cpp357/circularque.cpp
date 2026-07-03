#include <iostream>
using namespace std;

const int SIZE = 5;

bool isEmpty(int front, int rear)
{
    return front == -1;
}

bool isFull(int front, int rear)
{
    return (rear + 1) % SIZE == front;
}

void enqueue(int queue[], int &front, int &rear, int value)
{
    if (isFull(front, rear))
    {
        cout << "Queue is full\n";
        return;
    }

    if (isEmpty(front, rear))
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear + 1) % SIZE;
    }

    queue[rear] = value;
    cout << value << " inserted\n";
}

void dequeue(int queue[], int &front, int &rear)
{
    if (isEmpty(front, rear))
    {
        cout << "Queue is empty\n";
        return;
    }

    cout << queue[front] << " deleted\n";

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % SIZE;
    }
}

void display(int queue[], int front, int rear)
{
    if (isEmpty(front, rear))
    {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Queue: ";
    int i = front;
    while (true)
    {
        cout << queue[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    cout << '\n';
}

int main()
{
    int queue[SIZE];
    int front = -1, rear = -1;
    int choice, value;

    while (true)
    {
        cout << "\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter value: ";
            cin >> value;
            enqueue(queue, front, rear, value);
        }
        else if (choice == 2)
        {
            dequeue(queue, front, rear);
        }
        else if (choice == 3)
        {
            display(queue, front, rear);
        }
        else if (choice == 4)
        {
            break;
        }
        else
        {
            cout << "Invalid choice\n";
        }
    }

    return 0;
}