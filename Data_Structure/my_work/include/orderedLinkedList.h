#ifndef ORDEREDLINKEDLIST_H
#define ORDEREDLINKEDLIST_H

template <class Type>
class orderLinkedList {
public:
    orderLinkedList();
    void search(const nodeType<Type> *Item) const override;//查
    // void insert(const nodeType<Type> *newItem) override;
    void insertFirst(const nodeType<Type> *newItem) override;
    void insertLast(const nodeType<Type> *newItem) override;
    void deleteList(nodeTye<Type> *Item) override;
    ~orderLinkedList();
};

#endif