#include <iostream>
#include <print>
#include "stack.hpp"

void add_ordered(Stack& p, int x, int y) {
    if (p.empty()) return;

    Stack tmp;

    // Trovo chi è maggiore tra x e y
    int max = (x > y) ? x : y;
    int min = (x < y) ? x : y;

    // Trovo il posto in cui va inserito max
    while (!p.empty() && p.top() > max) {
        tmp.push(p.top());
    }
    tmp.push(max);

    // Trovo il posto in cui va inserito min
    while (!p.empty() && p.top() > min) {
        tmp.push(p.pop());
    }
    tmp.push(min);

    // Inserisco il resto nello stack di appoggio
    while (!p.empty()) { 
        tmp.push(p.pop());
    }

    // "Riverso" lo stack di appoggio
    while (!tmp.empty()) {
        p.push(tmp.pop());
    }
}

int main() {
    // 10, 8, 8, 5, 3, 3, 2, 0
    Stack stack;
    stack.push(0);
    stack.push(2);
    stack.push(3);
    stack.push(3);
    stack.push(5);
    stack.push(8);
    stack.push(8);
    stack.push(10);

    add_ordered(stack, 8, 11);

    while (!stack.empty()) {
        std::println("{}", stack.pop());
    }

    int a = 20;
    a %= 10;

    return 0;
}