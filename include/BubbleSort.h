#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "Sort.h"

class BubbleSort: public Sort
{
    public:
        BubbleSort();
        virtual ~BubbleSort();
//        using Sort::sort;
        void sort(int vect[], int size);
    protected:
    private:
};

#endif // BUBBLESORT_H
