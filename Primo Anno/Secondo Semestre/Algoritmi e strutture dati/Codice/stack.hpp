#pragma once
#include <iostream>
#include "list.hpp"

class Stack {
private:
    Node* head;
public:
    Stack();
    void push(int value);
    int pop();
    int top();
    bool empty();
};