#include<iostream>
using namespace std;
#define MAX 100
class Stack {
    int top;
    int arr[MAX];
public:
    Stack() {
        top = -1;
    }   
    void push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++top] = x;
    }
    int pop() {
        if (top < 0) {
            cout << "Stack underflow" << endl;
            return -1;
        }
        return arr[top--];
    }
    int peek() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty() {
        return (top < 0);
    }
};
int main() {
    Stack s;            
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " popped from stack" << endl;
    cout << "Top element is: " << s.peek() << endl;
    cout << "Stack is empty: " << (s.isEmpty() ? "true" : "false") << endl;
    s.pop();
    s.pop();
    cout << "Stack is empty: " << (s.isEmpty() ? "true" : "false") << endl;

return 0;
}