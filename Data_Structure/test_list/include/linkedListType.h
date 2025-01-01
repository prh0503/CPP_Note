#ifndef LINKEDLISTTYPE_H
#define LINKEDLISTTYPE_H

#include "nodeType.h"
#include "linkedListIterator.h"

template <class Type>
class linkedListType {
public:

    linkedListType();
    linkedListType(const linkedListType<Type>& otherList);
    const linkedListType<Type>& operator=(const linkedListType<Type>& otherList);
    void initializeList();
    bool isEmptyList() const;
    void print() const;
    int length() const;
    void destroyList();
    Type front() const;
    Type back() const;
    virtual bool search(const Type& searchItem) const = 0;
    virtual void insertFirst(const Type& newItem) = 0;
    virtual void insertLast(const Type& newItem) = 0;
    virtual void insert(const Type& newItem) = 0; // 添加虚函数声明
    virtual void deleteNode(const Type& deleteItem) = 0;
    linkedListIterator<Type> begin();
    linkedListIterator<Type> end();
    virtual ~linkedListType();
protected:
    int count;
    nodeType<Type> *first;
    nodeType<Type> *last;

private:
    void copyList(const linkedListType<Type>& otherList);
};

 // LINKEDLISTTYPE_H