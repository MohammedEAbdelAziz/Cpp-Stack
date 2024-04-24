#include <bits/stdc++.h>
#include "./include/MyStack.h"
using namespace std;


int main(){
    MyStack<int> stack(5);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.print();
    stack.pop();
    stack.print();
    cout << stack.top() << endl;
    cout << stack.getSize() << endl;
    cout << stack.isEmpty() << endl;
    cout << stack.isFull() << endl;
    stack.clear();
    stack.print();
    return 0;
}