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

Stack& Stack::from_array(int arr[], int n) {
    Stack* s = new Stack();
    
    for (int i = 0; i < n; i++) {
        s->push(arr[i]);
    }

    return *s;
}


Stack& Stack::from_array_reversed(int arr[], int n) {
    Stack* s = new Stack();
    
    for (int i = n - 1; i >= 0; i--) {
        s->push(arr[i]);
    }

    return *s;
}