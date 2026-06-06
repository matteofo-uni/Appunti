#include <iostream>
#include <print>
#include "queue.hpp"
#include "stack.hpp"

void remove(Queue& q, Stack& s) {
    Queue tmp;
    Stack stmp;

    int i = 0;

    while (!s.empty()) {
        int sv = s.pop();
        stmp.push(sv);

        while (!q.empty()) {
            int qv = q.dequeue();
            if (qv != sv) {
                tmp.enqueue(qv);
            }
        }

        while (!tmp.empty()) {
            q.enqueue(tmp.dequeue());
        }
    }

    while (!stmp.empty()) {
        s.push(stmp.pop());
    }
}

void remove_ex(Queue& q, Stack& s) {
    Queue tmp;

    while (!s.empty()) {
        int r = s.pop();
        int r2;

        while (!q.empty()) {
            r2 = q.dequeue();
            if (r != r2) {
                tmp.enqueue(r2);
            }
        }

        if (!s.empty()) {
            r = s.pop();
        }

        while (!tmp.empty()) {
            r2 = tmp.dequeue();
            if (r != r2) {
                q.enqueue(r2);
            }
        }
    }
}

int main() {
    Stack s;
    s.push(10);
    s.push(25);
    s.push(93);
    s.push(34);

    while (!s.empty()) {
        std::println("{}", s.pop());
    }

    s.push(10);
    s.push(25);
    s.push(93);
    s.push(34);

    std::println("=================");

    Queue q;
    q.enqueue(10);
    q.enqueue(12);
    q.enqueue(56);
    q.enqueue(34);
    q.enqueue(69);

    while (!q.empty()) {
        std::println("{}", q.dequeue());
    }

    std::println("=================");

    q.enqueue(10);
    q.enqueue(12);
    q.enqueue(56);
    q.enqueue(34);
    q.enqueue(69);

    remove_ex(q, s);

    while (!q.empty()) {
        std::println("{}", q.dequeue());
    }
    
    std::println("=================");
    
    while (!s.empty()) {
        std::println("{}", s.pop());
    }

    return 0;
}