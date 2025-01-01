#ifndef LINKEDLISTTYPE_H
#define LINKEDLISTTYPE_H
#include "nodeType.h"

template <class Type>
class linkedListType {
public:
    linkedListType();
    linkedListType(const linkedListType<Type>& otherList); //拷贝构造 copy constructor
    //拷贝
    const linkedListType<Type>& operator=(const linkedListType<Type>& otherList); //Overload 

    virtual void search(const nodeType<Type> *Item) const = 0;//查
    virtual void insert(const nodeType<Type> *newItem) = 0;
    virtual void insertFirst(const nodeType<Type> *newItem) = 0;
    virtual void insertLast(const nodeType<Type> *newItem) = 0;
    virtual void deleteList(nodeTye<Type> *Item) = 0;
    void destroyList();
    void initialize();
    bool isEmpty();
    void print();
    Type length() const;
    void destroy();
    //省略front()   感觉用处不大
    // Type front() const;
    // Type back() const;
    //省略back()
    // linkedListIterator<Type> begin();
    // linkedListIterator<Type> end();


    
    ~linkedListType();
protected:
    Type count;
    nodeType<Type> *first;
    nodeType<Type> *last;
private:
void copy(const linkedListType<Type>& otherList);
};

#endif