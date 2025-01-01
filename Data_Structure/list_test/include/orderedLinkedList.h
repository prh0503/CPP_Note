#ifndef orderedLinkedList_H
#define orderedLinkedList_H

#include "linkedListType.h"
// using namespace std;

template <class Type>
class orderedLinkedList : public linkedListType<Type> {
public:
    bool search(const Type& searchItem) const override;
    void insert(const Type& newItem) override;
    void insertFirst(const Type& newItem) override;
    void insertLast(const Type& newItem) override;
    void deleteNode(const Type& deleteItem) override;
};

#endif