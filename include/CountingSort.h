#ifndef COUNTINGSORT_H
#define COUNTINGSORT_H
#include "Sort.h"
#include <iostream>
#include <fstream>

class CountingSort : public Sort
{
    public:
        CountingSort();
        virtual ~CountingSort();
        void sort2(int vect[], int size){
            int a[25],b[25],c[25],n=size,i,j;
            for(i=0;i<n;i++){
                b[i]=0;
                c[i]=a[i]=vect[i];
            }
            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                    if (a[i]<a[j])
                        b[j]++;
                    else
                        b[i]++;
            }
            for(i=0;i<n;i++)
                a[b[i]]=c[i];
        cout<<endl<<"Sortarea prin numarare a avut loc cu succes";
        }
    protected:
    private:
};

#endif // COUNTINGSORT_H
