#include <iostream>
#include "orderedLinkedList.h"

template <class Type>
bool orderedLinkedList<Type>::search(const Type& searchItem) const {
    bool found = false;
    nodeType<Type> *current = this->first;
    while (current != nullptr && !found) {
        if (current->info == searchItem) {
            found = true;
        } else if (current->info < searchItem) {
            current = current->link;
        }
    }
    return found;
}

template <class Type>
void orderedLinkedList<Type>::insert(const Type& newItem) {
    nodeType<Type> *newNode = new nodeType<Type>{newItem, nullptr};
    nodeType<Type> **current = &this->first;

    while (*current != nullptr && (*current)->info < newItem) {
        current = &(*current)->link;
    }

    newNode->link = *current;
    *current = newNode;
    this->count++;
}

template <class Type>
void orderedLinkedList<Type>::insertFirst(const Type& newItem) {
    insert(newItem);
}

template <class Type>
void orderedLinkedList<Type>::insertLast(const Type& newItem) {
    if (this->isEmptyList()) {
        insert(newItem);
    } else {
        nodeType<Type> *newNode = new nodeType<Type>{newItem, nullptr};
        this->last->link = newNode;
        this->last = newNode;
        this->count++;
    }
}

template <class Type>
void orderedLinkedList<Type>::deleteNode(const Type& deleteItem) {
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
template class orderedLinkedList<int>;