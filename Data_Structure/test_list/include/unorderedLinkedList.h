#ifndef UNORDEREDLINKEDLIST_H
#define UNORDEREDLINKEDLIST_H

#include "linkedListType.h"

template <class Type>
class unorderedLinkedList : public linkedListType<Type> {
public:
    bool search(const Type& searchItem) const override;
    void insertFirst(const Type& newItem) override;
    void insertLast(const Type& newItem) override;
    void deleteNode(const Type& deleteItem) override;
};

#endif // UNORDEREDLINKEDLIST_H