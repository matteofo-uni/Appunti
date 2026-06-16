#include <iostream>
#include <print>
#include "stack.hpp"

void esercizio(Stack& p, Stack& q, Stack& s) {
    Stack temp;

    while (!p.empty() && !q.empty()) {
        if (p.top() == q.top()) {
            if (temp.empty() || temp.top() != p.top()) {
                temp.push(p.top());
            }

            p.pop();
            q.pop();
        } else if (p.top() > q.top()) {
            q.pop();
        } else {
            p.pop();
        }
    }

    while (!temp.empty()) {
        s.push(temp.pop());
    }
}

int main() {
    Stack p = Stack::from_array_reversed((int[]){2, 3, 3,3, 5, 7,7,10, 12, 19,20,20}, 12);
    Stack q = Stack::from_array_reversed((int[]){2,2,4, 5,5,6, 12,12,15}, 9);
    Stack s;

    esercizio(p, q, s);

    while (!s.empty()) {
        std::println("{}", s.pop());
    }

    return 0;
}