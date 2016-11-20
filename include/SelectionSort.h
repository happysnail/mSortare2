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
        int nrElemente,aux,*v;
        nrElemente = size;
        v = new int [nrElemente];
        for(int i=0;i<nrElemente;i++)
            v[i]=vect[i];

        for(int i=0;i<nrElemente-1;i++)
            for(int j=i+1;j<nrElemente;j++)
                if(v[i]>v[j])
                {
                    aux=v[j];
                    v[j]=v[i];
                    v[i]=aux;
                }
        cout<<endl<<"Sortarea prin selectie a avut loc cu succes";
    }
protected:
private:
};

#endif // SELECTIONSORT_H
