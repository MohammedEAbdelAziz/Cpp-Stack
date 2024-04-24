#ifndef MyStack_H
#define MyStack_H

#include <string>
using namespace std;

template <class T>
class MyStack {
    private:
        T* stack;
        int top;
        int size;
    public:
        MyStack(int size);
        MyStack();
        MyStack(const MyStack<T>& other);
        void push(T value);
        T pop();
        T top();
        bool isEmpty();
        int getSize();
        bool isFull();
        void clear();
        void print();
};

#endif