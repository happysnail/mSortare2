#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include "Sort.h"

class InsertionSort: public Sort
{
    public:
        InsertionSort();
        virtual ~InsertionSort();
       // using Sort::sort;
        void sort(int vect[], int size);
    protected:
    private:
};

#endif // INSERTIONSORT_H
