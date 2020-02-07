#include <iostream>
#include "stack.h"
#define SIZE 1024
using namespace std;

int main() {
    Stack *my_stack = new Stack(SIZE);
    my_stack->push(6.0);
    cout << "Peek: " << my_stack->peek() << "\n";
    cout << "Empty: " << my_stack->isEmpty() << "\n";
    cout << "Full: " << my_stack->isFull() << "\n";

    for (int i = 0; i < SIZE-1; i++) {
        my_stack->push(6.0);
    }

    cout << "Full: " << my_stack->isFull() << "\n";

    for (int i = 0; i < SIZE; i++) {
        my_stack->pop();
    }

    cout << "Empty: " << my_stack->isEmpty() << "\n";
}

