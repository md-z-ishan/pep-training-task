#include<iostream>
using namespace std;
#define MAX 100;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
class Stack{
    Node* top;
    public:
    Stack(){        
        top=NULL;
    }
    void push(int x){
        Node* newNode=new Node(x);
        newNode->next=top;
        top=newNode;
    }
    int pop(){
        if(top==NULL){
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        int value=top->data;
        Node* temp=top;
        top=top->next;
        delete temp;
        return value;
    }
    int peek(){
        if(top==NULL){        
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }
    bool isEmpty(){
        return (top==NULL);
    }
};
int main(){
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