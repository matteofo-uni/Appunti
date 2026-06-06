#include "stack.hpp"

Stack::Stack() {
    this->head = nullptr;
}

bool Stack::empty() {
    return this->head == nullptr;
}

void Stack::push(int value) {
    if (this->empty()) {
        this->head = new Node(value);
        return;
    }

    Node* tmp = new Node(value);
    tmp->next = this->head;
    this->head = tmp;
}

int Stack::top() {
    return this->head->value;
}

int Stack::pop() {
    int value = this->top();

    Node* tmp = this->head;
    this->head = tmp->next;
    delete tmp;

    return value;
}