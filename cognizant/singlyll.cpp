//    given a singly linked list and an integer N,find the nth node from the end of the linked list in a single travel.
// logic-> use two-pointers fisrt and second
   #include <iostream>
    using namespace std;

    struct Node {
        int data;
        Node* next;

        Node(int value) {
            data = value;
            next = nullptr;
        }
    };

    int nthNodeFromEnd(Node* head, int n) {
        Node* first = head;
        Node* second = head;

        // Move first pointer N steps ahead.
        for (int i = 0; i < n; i++) {
            if (first == nullptr) {
                return -1;
            }
            first = first->next;
        }

        // Move both pointers until first reaches the end.
        while (first != nullptr) {
            first = first->next;
            second = second->next;
        }

        return second == nullptr ? -1 : second->data;
    }

    int main() {
        Node* head = new Node(10);
        head->next = new Node(20);
        head->next->next = new Node(30);
        head->next->next->next = new Node(40);
        head->next->next->next->next = new Node(50);

        int n = 2;
        int answer = nthNodeFromEnd(head, n);

        if (answer == -1) {
            cout << "Invalid N" << endl;
        } else {
            cout << answer << endl;
        }

        return 0;
    }
