#ifndef UNORDEREDLINKEDLIST_H
#define UNORDEREDLINKEDLIST_H


template <class Type>
class unorderedLinkedList {
public:
    unorderedLinkedList();
    void search(const nodeType<Type> *Item) const override;//查
    void insert(const nodeType<Type> *newItem) override;
    void insertFirst(const nodeType<Type> *newItem) override;
    void insertLast(const nodeType<Type> *newItem) override;
    void deleteList(nodeTye<Type> *Item) override;
    ~unorderedLinkedList();
};

#endif