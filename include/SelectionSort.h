#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
#include "Sort.h"


class SelectionSort: public Sort
{
    public:
        SelectionSort();
        virtual ~SelectionSort();
        void sort(int vect[], int size);
    protected:
    private:
};

#endif // SELECTIONSORT_H
