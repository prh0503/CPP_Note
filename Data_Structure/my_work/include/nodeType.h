#ifndef NODETYPE_H
#define NODETYPE_H

template <class Type>
struct nodeType {
    Type info;
    nodeType<Type> *next;
    nodeType(Type info = Type(), nodeType<Type> *next = nullptr) : info(info), next(next) {}
};

#endif