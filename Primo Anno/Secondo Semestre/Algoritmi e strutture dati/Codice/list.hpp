#pragma once
#include <iostream>
#include <print>

class Node {
public:
    Node* next;
    int value;
    Node(int value);

    static Node* list_from_array(int arr[], int n);
    void print_list();
};