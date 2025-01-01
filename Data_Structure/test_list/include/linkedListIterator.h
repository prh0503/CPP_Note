#ifndef LINKEDLISTITERATOR_H
#define LINKEDLISTITERATOR_H

#include "nodeType.h"

template <class Type>
class linkedListIterator {
public:
    linkedListIterator();
    explicit linkedListIterator(nodeType<Type> *ptr);
    Type operator*() const;
    linkedListIterator<Type>& operator++();
    bool operator==(const linkedListIterator<Type>& right) const;
    bool operator!=(const linkedListIterator<Type>& right) const;

private:
    nodeType<Type> *current;
};

#endif // LINKEDLISTITERATOR_H