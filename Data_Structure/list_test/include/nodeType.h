#ifndef NODETYPE_H
#define NODETYPE_H

template <class Type>
struct nodeType
{
    Type info;
    nodeType<Type> *link;
    nodeType(const Type& info = Type(), nodeType<Type>* link = nullptr) : info(info), link(link) {};
};

#endif

/*

nodeType<Type> *ptr);
*/