//
// Created by user on 24.09.2022.
//

#ifndef IVANOVAMARIYA_STACK_H
#define IVANOVAMARIYA_STACK_H

#include <cstddef>
#include "LinkedList.h"

class Stack {
private:
    size_t size{0};
    LinkedList list;

public:

    Stack() = default;

    void push(int value) {
        list.Add(value);
        size++;
    }

    int peek() {
        if(size == 0) {
            //выбрасываем исключение
            throw runtime_error("Stack is empty");
        }
        return list.back();
    }

    int pop() {
        if(size == 0) {
            //выбрасываем исключение
            throw runtime_error("Stack is empty");
        }
        int res = list.back();
        list.Remove(size - 1);
        size--;
        return res;
    }
};

#endif //IVANOVAMARIYA_STACK_H
