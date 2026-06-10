#include "list.hpp"

Node::Node(int value) {
    this->value = value;
    this->next = nullptr;
}

Node* Node::list_from_array(int arr[], int n) {
    if (n <= 0) return nullptr;

    Node* head = new Node(arr[0]);
    Node* cur = head;
    for (int i = 1; i < n; i++) {
        cur->next = new Node(arr[i]);
        cur = cur->next;
    }

    return head;
}

void Node::print_list() {
    Node* cur = this;

    while (cur != nullptr) {
        std::print("{} ", cur->value);
        cur = cur->next;
    }

    std::println("");
}