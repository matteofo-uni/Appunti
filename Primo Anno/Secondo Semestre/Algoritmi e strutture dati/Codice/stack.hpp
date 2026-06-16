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

    static Stack& from_array(int arr[], int n);
    static Stack& from_array_reversed(int arr[], int n);
};