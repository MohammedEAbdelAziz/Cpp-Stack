#include <bits/stdc++.h>
#include "../include/MyStack.h"
using namespace std;


template <class T>
MyStack<T>::MyStack(int size) {
    this->size = size;
    stack = new T[size];
    top = -1;
}

template <class T>
MyStack<T>::MyStack() {
    size = 1;
    stack = new T[size];
    top = -1;
}

template <class T>
MyStack<T>::MyStack(const MyStack<T>& other) {
    size = other.size;
    stack = new T[size];
    top = other.top;
    for (int i = 0; i <= top; i++) {
        stack[i] = other.stack[i];
    }
}



template <class T>
MyStack<T>::push(T value) {
    if (isFull()) {
        cout << "Stack is full" << endl;
        return;
    }
    stack[++top] = value;
}

template <class T>
MyStack<T>::pop() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    size--;
    return stack[top--];
}

template <class T>
MyStack<T>::top() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    return stack[top];
}

template <class T>
MyStack<T>::isEmpty() {
    return top == -1;
}

template <class T>
MyStack<T>::getSize() {
    return size;
}

template <class T>
MyStack<T>::isFull() {
    return top == size - 1;
}

template <class T>
MyStack<T>::clear() {
    top = -1;
}


template <class T>
MyStack<T>::print() {
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    cout << endl;
}
