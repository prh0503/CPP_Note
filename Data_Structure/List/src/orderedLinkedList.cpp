#include <iostream>
#include "orderedLinkedList.h"
using namespace std;

template <class Type>
bool orderedLinkedList<Type>::search(const Type& searchItem) const {
    bool found = false;
    nodeType<Type> *current = this->first; //start the search at the first node
    while (current != nullptr && !found) {
        if (current->info >= searchItem) {
            found = true;
        } else {
            current = current->link;
        }
    }
    if (found) {
        found = (current->info == searchItem); //test for equality
    }
    return found;
}//end search

template <class Type>
void orderedLinkedList<Type>::insert(const Type& newItem) {
    nodeType<Type> *current; //pointer to traverse the list
    nodeType<Type> *trailCurrent = nullptr; //pointer just
    //before current
    nodeType<Type> *newNode;//pointer to create a node
    bool found;
    newNode = new nodeType<Type>; //create the node
    newNode->info = newItem; //store newItem in the node
    newNode->link = nullptr; //set the link field of the node

    if (first == nullptr) {
        first = newNode;
        last = newNode;
        count++;
    } else {
        current = first;
        found = false;
        while (current != nullptr && !found) {
            if (current->info >= newItem) {
                found = true;
            }
            else {
                trailCurrent = current;
                current = current->link;
            }
        }
        if (current == first) {
            newNode->link = first;
            first = newNode;
            count++;
        } else {
            trailCurrent->link = newNode;
            newNode->link = current;
            if (current == nullptr) {
                last = newNode;
            }
            count++;
        }
    }//end else
}//end insert

template <class Type>
void orderedLinkedList<Type>::insertFirst(const Type& newItem) {
    insert(newItem);
}//end insertFirst

template <class Type>
void orderedLinkedList<Type>::insertLast(const Type& newItem) {
    insert(newItem);
}//end insertLast

template <class Type>
void orderedLinkedList<Type>::deleteNode(const Type& deleteItem) {
    nodeType<Type> *current; //pointer to traverse the list
    nodeType<Type> *trailCurrent = nullptr; //pointer just
    //before current
    bool found;
    if (first == nullptr) {
        cout << "Cannot delete from an empty list." << endl;
    } else {
        current = first;
        found = false;
        while (current != nullptr && !found) {
            if (current->info >= deleteItem) {
                found = true;
            } else {
                trailCurrent = current;
                current = current->link;
            }
        }
        if (current == nullptr) {
            cout << "The item to be deleted is not in the " << "list." << endl;
        } else {
            if (current->info == deleteItem) {
                if (first == current) {
                    first = first->link;
                    if (first == nullptr) {
                        last = nullptr;
                    }  
                    delete current;
                } else {
                    trailCurrent->link = current->link;
                    if (current == last) {
                        last = trailCurrent;
                    }
                    delete current;
                }
            count--;
            } else {
                cout << "The item to be deleted is not in the " << "list." << endl;
            }
        }
    }
}//end deleteNode

template class orderedLinkedList<int>;