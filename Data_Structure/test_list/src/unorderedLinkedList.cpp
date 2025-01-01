#include <iostream>
#include "unorderedLinkedList.h"

template <class Type>
bool unorderedLinkedList<Type>::search(const Type& searchItem) const {
    nodeType<Type> *current = this->first;
    while (current != nullptr) {
        if (current->info == searchItem) {
            return true;
        }
        current = current->link;
    }
    return false;
}

template <class Type>
void unorderedLinkedList<Type>::insertFirst(const Type& newItem) {
    nodeType<Type> *newNode = new nodeType<Type>{newItem, this->first};
    this->first = newNode;
    if (this->last == nullptr) {
        this->last = newNode;
    }
    this->count++;
}

template <class Type>
void unorderedLinkedList<Type>::insertLast(const Type& newItem) {
    nodeType<Type> *newNode = new nodeType<Type>{newItem, nullptr};
    if (this->isEmptyList()) {
        this->first = newNode;
    } else {
        this->last->link = newNode;
    }
    this->last = newNode;
    this->count++;
}

template <class Type>
void unorderedLinkedList<Type>::deleteNode(const Type& deleteItem) {
    nodeType<Type> *current = this->first;
    nodeType<Type> *prev = nullptr;

    while (current != nullptr && current->info != deleteItem) {
        prev = current;
        current = current->link;
    }

    if (current == nullptr) {
        std::cout << "Item not found in the list." << std::endl;
    } else {
        if (prev == nullptr) {
            this->first = current->link;
        } else {
            prev->link = current->link;
        }

        if (current == this->last) {
            this->last = prev;
        }

        delete current;
        this->count--;
    }
}
template class unorderedLinkedList<int>;