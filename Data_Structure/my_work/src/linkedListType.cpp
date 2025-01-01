#include <iostream>
#include "linkedListType.h"
#include "nodeType.h"


template <class Type>
linkedListType<Type>::linkedListType<Type>() {
    count = 0;
    first = nullptr;
    last = nullptr;
}


template <class Type>
linkedListType<Type>::linkedListType(const linkedListType<Type>& otherList) {
    if(first != nullptr) {
        linkedListType<Type> *tempA = first;
        linkedListType<Type> *tempB = otherList.first;
        this->count = otherList.count;
        while(tempB->next != nullptr) {
            tempA->next = otherList.first->next;
            temp->info = otherList.first->info;
            temp = temp->next;

        }
    }
}

template <class Type>
void linkedListType<Type>::destroyList() {
    nodeType<Type> *temp;
    while (first != nullptr) {
        temp = first;
        first = first->next;
        delete temp;
    }
    last = nullptr;
    count = 0;
}

template <class Type>
void linkedListType<Type>::copy(const linkedListType<Type>& otherList) {
    if (&otherList != this) {
        nodeType<Type> *current = first;
        nodeType<Type> *other = otherList.first;
        //
        while (current != nullptr && other != nullptr) {
            current->info = other->info;
            current = current->next;
            other = other->next;
        }

        // 若原链表长，删去多余部分
        while (current != nullptr) {
            nodeType<Type> *temp = current->next;
            delete current;
            current = temp;
        }

        // 若当前链表长
        while (other != nullptr) {
            if(first == nullptr) {
                first = new nodeType<Type>(other->info);
                current =  first;
                other = other->next;
            } else {
                current->next = new nodeType<Type>(other->info);
                current = current->next;
            }
            other = other->next;
        }
        last = current;
        count = otherList.count;
    }

}



const linkedListType<Type>& operator=(const linkedListType<Type>& otherList) {

}

