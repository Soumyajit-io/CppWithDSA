#include<iostream>
using namespace std;
int arr[100];
int top = -1;
void push( int val) {
    arr[++top] = val;
}
void pop() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }
    top--;
}
void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }
    for (int i = 0; i <= top; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void top() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Top element is: " << arr[top] << endl;
}
int main(){
   push(10);
   push(20);
   push(30);
   pop();
   display();
   top();
   return 0;
   
}