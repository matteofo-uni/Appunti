#include "queue.hpp"

Queue::Queue() {
    this->head = nullptr;
    this->tail = nullptr;
}

void Queue::enqueue(int value) {
    if (this->empty()) {
        this->head = new Node(value);
        this->tail = this->head;
        return;
    }

    Node* tmp = new Node(value);
    this->tail->next = tmp;
    this->tail = tmp;
}

int Queue::dequeue() {
    Node* tmp = this->head;

    int val = tmp->value;
    this->head = this->head->next;
    delete tmp;

    return val;
}

bool Queue::empty() {
    return this->head == nullptr;
}