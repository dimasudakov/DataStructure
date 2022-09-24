//
// Created by user on 24.09.2022.
//

#ifndef IVANOVAMARIYA_NODE_H
#define IVANOVAMARIYA_NODE_H

class Node {

public:

    int value{0};         // значение узла
    Node* next{nullptr};  // указатель на следующий узел
    Node* prev{nullptr};  // указатель на предыдующий узел


    // конструктор узла
    Node(int value, Node *prev = nullptr, Node *next = nullptr) : value{value}, prev{prev}, next{next} {}
};

#endif //IVANOVAMARIYA_NODE_H
