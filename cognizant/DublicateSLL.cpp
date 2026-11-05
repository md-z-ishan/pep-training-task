//Given an unsorted singly linked list,remove all duplicate duplicates elements while keeping the first occurrence of each element.

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

void removeDuplicates(Node* head) {
    Node* current = head;

    while (current != NULL) {
        Node* temp = current;

        while (temp->next != NULL) {
            if (temp->next->data == current->data) {
                Node* duplicate = temp->next;
                temp->next = temp->next->next;
                delete duplicate;
            }
            else {
                temp = temp->next;
            }
        }

        current = current->next;
    }
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(10);
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(20);

    cout << "Original List: ";
    printList(head);

    removeDuplicates(head);

    cout << "\nAfter Removing Duplicates: ";
    printList(head);

    return 0;
}