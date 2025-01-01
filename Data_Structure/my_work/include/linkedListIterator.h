#ifndef LINKEDLISTITERATOR_H
#define LINKEDLISTITERATOR_H
#include "nodeType.h"

template <class Type>
class linkedListIterator {
public:
    linkedListIterator();
    explicit linkedListIterator(const nodeType<Type> *ptr);
    // linkedListIterator<Type> operator++(const linkedListType<Type> *otherList); // ++
    // linkedListIterator<Type> operator*(const linkedListType<Type> *otherList); // *
    // const linkedListIterator<Type> operator==(const linkedListType<Type> *otherList); // ==
    // const linkedListIterator<Type> operator!=(const linkedListType<Type> *otherList); // !=
    linkedListIterator<Type>& operator++(); // ++
    Type operator*() const; // *
    bool operator==(const linkedListIterator<Type>& right) const; // ==
    bool operator!=(const linkedListIterator<Type>& right) const ; // !=

private:
    nodeType<Type> *current;

};

#endif