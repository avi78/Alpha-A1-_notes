#include <iostream>
using namespace std;

#define MAX_SIZE 100

int stk[MAX_SIZE];
int top = -1;

bool isEmpty() {
    return (top < 0);
}

void push(int x) {
    if (top >= MAX_SIZE - 1) {
        cout << "Stack overflow" << endl;
        return;
    }
    top++;
    stk[top] = x;
    cout << x << " pushed to stack" << endl;
}

int pop() {
    if (top < 0) {
        cout << "Stack Underflow" << endl;
        return -1;
    }
    int item = stk[top];
    top--;
    return item;
}

int peek() {
    if (top < 0) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return stk[top];
}

int main() {
    push(10);
    push(20);
    push(30);
    cout << "Top element: " << peek() << endl;
    cout << "Popped element: " << pop() << endl;
    cout << "Popped element: " << pop() << endl;
    cout << "Is stack empty? " << (isEmpty() ? "Yes" : "No") << endl;
    cout << "Popped element: " << pop() << endl;
    cout << "Is stack empty? " << (isEmpty() ? "Yes" : "No") << endl;
    return 0;
}
