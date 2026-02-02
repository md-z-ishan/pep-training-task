#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insertAtBeginning(Node* head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    return head;
}

void traverse(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main() {
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    first->data = 10;
    second->data = 20;
    third->data = 30;

    first->next = second;
    second->next = third;
    third->next = NULL;

    Node* head = first;

    cout << "Before Insertion:\n";
    traverse(head);

    head = insertAtBeginning(head, 5);

    cout << "\nAfter Insertion:\n";
    traverse(head);

    return 0;
}
