#include "linkedListType.h"
#include <iostream>
#include <stdexcept>

// template class linkedListType<int>;

template <class Type>
linkedListType<Type>::linkedListType() : first(nullptr), last(nullptr), count(0) {}

template <class Type>
linkedListType<Type>::linkedListType(const linkedListType<Type>& otherList) : first(nullptr), last(nullptr), count(0) {
    copyList(otherList);
}

template <class Type>
linkedListType<Type>::~linkedListType() {
    destroyList();
}

template <class Type>
const linkedListType<Type>& linkedListType<Type>::operator=(const linkedListType<Type>& otherList) {
    if (this != &otherList) {
        destroyList();
        copyList(otherList);
    }
    return *this;
}

template <class Type>
void linkedListType<Type>::initializeList() {
    destroyList();
}

template <class Type>
bool linkedListType<Type>::isEmptyList() const {
    return first == nullptr;
}

template <class Type>
void linkedListType<Type>::print() const {
    nodeType<Type> *current = first;
    while (current != nullptr) {
        std::cout << current->info << " ";
        current = current->link;
    }
    std::cout << std::endl;
}

template <class Type>
int linkedListType<Type>::length() const {
    return count;
}

template <class Type>
void linkedListType<Type>::destroyList() {
    nodeType<Type> *temp;
    while (first != nullptr) {
        temp = first;
        first = first->link;
        delete temp;
    }
    last = nullptr;
    count = 0;
}

template <class Type>
Type linkedListType<Type>::front() const {
    if (first == nullptr) throw std::out_of_range("List is empty");
    return first->info;
}

template <class Type>
Type linkedListType<Type>::back() const {
    if (last == nullptr) throw std::out_of_range("List is empty");
    return last->info;
}

template <class Type>
void linkedListType<Type>::copyList(const linkedListType<Type>& otherList) {
    if (&otherList != this) {
        destroyList();
        if (otherList.first != nullptr) {
            first = new nodeType<Type>(otherList.first->info);
            last = first;
            nodeType<Type> *current = otherList.first->link;
            while (current != nullptr) {
                last->link = new nodeType<Type>(current->info);
                last = last->link;
                current = current->link;
            }
            count = otherList.count;
        }
    }
}

template <class Type>
linkedListIterator<Type> linkedListType<Type>::begin() {
    return linkedListIterator<Type>(first);
}

template <class Type>
linkedListIterator<Type> linkedListType<Type>::end() {
    return linkedListIterator<Type>(nullptr);
}
template class linkedListType<int>;