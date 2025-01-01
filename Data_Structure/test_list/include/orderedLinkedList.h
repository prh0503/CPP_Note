#ifndef ORDEREDLINKEDLIST_H
#define ORDEREDLINKEDLIST_H

#include "linkedListType.h"

template <class Type>
class orderedLinkedList : public linkedListType<Type> {
public:
    bool search(const Type& searchItem) const override;
    void insert(const Type& newItem) override;
    void insertFirst(const Type& newItem) override;
    void insertLast(const Type& newItem) override;
    void deleteNode(const Type& deleteItem) override;
};

#endif // ORDEREDLINKEDLIST_H