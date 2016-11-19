#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
#include "Sort.h"
#include <iostream>
#include <fstream>


class SelectionSort: public Sort
{
    public:
        SelectionSort();
        virtual ~SelectionSort();
    void sort2(int vect[], int size)
    {
        int nrElemente,aux;

        for(int i=0;i<nrElemente-1;i++)
            for(int j=i+1;j<nrElemente;j++)
                if(vect[i]>vect[j])
                {
                    aux=vect[j];
                    vect[j]=vect[i];
                    vect[i]=aux;
                }
        for(int i=0;i<nrElemente;i++)
            cout<<vect[i]<<" ";
        cout<<endl<<"Sortarea prin selectie a avut loc cu succes";
}
    protected:
    private:
};

#endif // SELECTIONSORT_H
