#ifndef OBJPOS_ARRAYLIST_HPP
#define OBJPOS_ARRAYLIST_HPP

#define ARRAY_MAX_CAP 200

#include "../objPos.hpp"  // one level up to the project root

class objPosArrayList
{
    private:
        objPos* aList;
        int listSize;
        int arrayCapacity;

    public:
        objPosArrayList();
        ~objPosArrayList();

        int getSize() const;
        void insertHead(objPos thisPos);
        void insertTail(objPos thisPos);
        objPos removeHead();
        objPos removeTail();
        
        objPos getHeadElement() const;
        objPos getTailElement() const;
        objPos getElement(int index) const;
};

#endif