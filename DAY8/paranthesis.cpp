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
    void push(char x) {
        if (top >= MAX - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++top] = x;
    }
    char pop() {
        if (top < 0) {
            cout << "Stack underflow" << endl;
            return '\0';
        }
        return arr[top--];
    }
    char peek() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return '\0';
        }
        return arr[top];
    }
    bool isEmpty() {
        return (top < 0);
    }
};
bool isMatchingPair(char left, char right) {
    return (left == '(' && right == ')') ||



              (left == '{' && right == '}') ||
              (left == '[' && right == ']');            
}
bool areParenthesesBalanced(string expr) {
    Stack s;
    for (char ch : expr) {
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.isEmpty() || !isMatchingPair(s.pop(), ch)) {
                return false;
            }
        }
    }
    return s.isEmpty();
}
int main() {
    string expr;
    cout << "Enter an expression: ";
    cin >> expr;
    if (areParenthesesBalanced(expr)) {


        cout << "Balanced" << endl;
    } else {
        cout << "Not Balanced" << endl;
    }
    return 0;
}
