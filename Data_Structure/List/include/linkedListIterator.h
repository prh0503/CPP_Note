#include "nodeType.h"

template <class Type>
class linkedListIterator {
public:
    linkedListIterator();
    linkedListIterator(nodeType<Type> *ptr);
    Type operator* ();
    linkedListIterator<Type> operator++();
    bool operator==(const linkedListIterator<Type>& right) const;
    bool operator!=(const linkedListIterator<Type>& right) const;

protected:

private:
    nodeType<Type> * current;

};