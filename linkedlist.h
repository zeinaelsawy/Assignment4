#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <vector>

class Node {
public:
    int value;
    Node* next;

    Node() : value(0), next(nullptr) {}
    Node(int x) : value(x), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void addNode(int x) {
        Node* newNode = new Node(x);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void deleteNode() {
        if (head != nullptr) {
            if (head->next == nullptr) {
                delete head;
                head = nullptr;
            } else {
                Node* temp = head;
                while (temp->next->next != nullptr) {
                    temp = temp->next;
                }
                Node* last = temp->next;
                temp->next = nullptr;
                delete last;
            }
        }
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->value << std::endl;
            temp = temp->next;
        }
    }

    void addVectorToList(const std::vector<int>& num) {
        for (int i = 0; i < num.size(); i++) {
            addNode(num[i]);
        }
    }

    int sum() {
        Node* ptr = head;
        int total = 0;
        while (ptr != nullptr) {
            total += ptr->value;
            ptr = ptr->next;
        }
        return total;
    }
};

#endif /* LINKEDLIST_H */
