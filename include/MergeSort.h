#ifndef MERGESORT_H
#define MERGESORT_H
#include "Sort.h"
#include "iostream"

class MergeSort : public Sort
{
public:
    MergeSort();
    virtual ~MergeSort();
    int *v,nrElemente;

    void interclas(int i,int m,int j)
    {   int b[1000];
        int x=i;
        int k=1;
        int y=m+1;
        while(x<=m && y<=j)
            if (v[x]<v[y])
                b[k++]=v[x++];
            else
                b[k++]=v[y++];

        while (x<=m)
                b[k++]=v[x++];
        while (y<=j)
                b[k++]=v[y++];

        int t=i;
        for (k=1;k<=(j-i)+1;k++)
                v[t++]=b[k];
    }

    void divimp(int i,int j)
    {
        if (i<j)
        {
            int m=(i+j)/2;
        divimp(i,m);
        divimp(m+1,j);
        interclas(i,m,j);
        }
    }

    void sort2(int vect[], int size)
    {
        nrElemente = size;
        v = new int [nrElemente];
        for(int i=0;i<nrElemente;i++)
            v[i+1]=vect[i];
        divimp(1,nrElemente);
        cout<<endl<<"Sortarea marge a avut loc cu succes."<<endl;
    }

protected:
private:
};

#endif // MERGESORT_H
