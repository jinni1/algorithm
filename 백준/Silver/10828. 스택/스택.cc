#include <iostream>
#include <string>

using namespace std;

class Stack {
    public:
        int size = 0;
        int top = -1;
        int *arr;
        bool isEmpty();
        void push(int a);
        int pop();
        int getSize();
        int getTop();
        Stack(int n);
};

Stack::Stack(int n) {
    arr = new int[n];
}

bool Stack::isEmpty(){
    if(size == 0) return true;
    else return false;
}

void Stack::push(int a) {
    arr[size] = a;
    size++;
    top = a;
}

int Stack::pop() {
    if (size == 0) {
        top = -1;
        return -1;
    } else {
        size--;
        top = arr[size-1];
        return arr[size];
    }
}

int Stack::getSize() {
    return size;
}

int Stack::getTop(){
    if (size == 0 ){
        return -1;
    } else {
        return top;
    }
}

int main() {
    int N;
    cin >> N;
    string com;
    int input;
    Stack stack(N);
    for (int i=0; i<N; i++){
        cin>> com;
        if (com == "push") {
            cin >> input;
            stack.push(input);
        } else if (com == "top") {
            cout << stack.getTop() << endl;
        } else if (com == "size") {
            cout << stack.getSize() << endl;
        } else if (com == "empty") {
            cout << stack.isEmpty() << endl;
        } else if (com == "pop") {
            cout << stack.pop() << endl;
        }
    }

}