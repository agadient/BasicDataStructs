#include <stdlib.h>
#include <assert.h>
#include "stack.h"

//TODO include dynamic typing using templates;
Stack::Stack (size_t size) {
    assert(size && "You cannot create a stack of size 0!");
    arr = new double[size];
    space = size;
    top = 0;
}

double Stack::pop() {
    assert(top && "The stack is empty, you cannot pop!");
    return arr[--top];
}

void Stack::push(double new_val) {
    assert(space != top && "The stack is full, you cannot push more!");
    arr[top++] = new_val;
}

double Stack::peek() {
    assert(top && "The stack is empty, you cannot peek!");
    return arr[top-1];
}

bool Stack::isEmpty() {
    if (!top) return true;
    return false;
}

bool Stack::isFull() {
    if (top == space) return true;
    return false;
}
