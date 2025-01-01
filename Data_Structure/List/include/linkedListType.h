#ifndef LINKEDLISTTYPE_H
#define LINKEDLISTTYPE_H

#include "linkedListIterator.h"
template <class Type>
class linkedListType
{
public:
    linkedListType();
    linkedListType(const linkedListType<Type>& otherList);
    const linkedListType<Type>& operator=(const linkedListType<Type>&);
    void initializeList();
    bool isEmptyList() const;
    void print() const;
    int length() const;
    void destroyList();
    Type front() const;
    Type back() const;
    virtual bool search(const Type& searchItem) const = 0;
    virtual void insert(const Type& newItem) = 0;
    virtual void insertFirst(const Type& newItem) = 0;
    virtual void insertLast(const Type& newItem) = 0;
    virtual void deleteNode(const Type& deleteItem) = 0;
    linkedListIterator<Type> begin();
    linkedListIterator<Type> end();
    virtual ~linkedListType();
protected:
    int count;
    nodeType<Type> *first; //pointer to the first node of the list
    nodeType<Type> *last; //pointer to the last node of the list
private:
    void copyList(const linkedListType<Type>& otherList);
};
#endif