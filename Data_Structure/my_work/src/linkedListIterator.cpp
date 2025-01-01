#include <iostream>
#include "linkedListIterator.h"

template <class Type>
linkedListIterator<Type>::linkedListIterator() : current(nullptr) {}

template <class Type>
linkedListIterator<Type>::linkedListIterator(const nodeType<Type> *ptr) {
    current = ptr;
}

template <class Type>
linkedListIterator<Type>& linkedListIterator<Type>::operator++() {
    current = current->next;
    return *this;
}

template <class Type>
Type linkedListIterator<Type>::operator*() const {
    return current->info;
}

template <class Type>
bool linkedListIterator<Type>::operator==(const linkedListIterator<Type>& right) const {
    return current == right.current;
}

template <class Type>
bool linkedListIterator<Type>::operator!=(const linkedListIterator<Type>& right) const {
    return current != right.current;
}

// template <class Type>
// bool operator==(const linkedListIterator<Type>& right) const {
//     return current == right.current;
// }

// template <class Type>
// bool operator!=(const linkedListIterator<Type>& right) const {
//     return current != right.current;
// }

template class linkedListIterator<int>;