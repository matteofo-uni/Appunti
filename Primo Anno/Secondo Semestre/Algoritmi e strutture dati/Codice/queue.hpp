#pragma once
#include <iostream>
#include <print>
#include "list.hpp"

class Queue {
private:
    Node* head;
    Node* tail;
public:
    Queue();
    void enqueue(int value);
    int dequeue();
    bool empty();
};