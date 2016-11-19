#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include "Sort.h"
#include <iostream>
#include <fstream>

class InsertionSort: public Sort
{
    public:
        InsertionSort();
        virtual ~InsertionSort();
       // using Sort::sort;
    void sort2(int vect[], int size){
        int numarElemente,*v,x,j;

        ifstream f;
        f.open("fisierGenerat.txt");
        f>>numarElemente;
        v=new int [numarElemente];

        for(int i=0;i<numarElemente;i++)
            f>>v[i];

        for(int i=2;i<=numarElemente;i++)
            if (v[i]<v[i-1])
            {
                x=v[i];
                j=i-1;
                while (j>=0 && v[j]>x)
                {
                    v[j+1]=v[j];
                    j--;
                }
                v[j+1]=x;
            }

        cout<<endl;
        cout<<"Sortarea prin insertie a avut loc cu succes";
//    for(int i=0;i<numarElemente;i++)
//        cout<<v[i]<<" ";
        f.close();
    }
    protected:
    private:
};

#endif // INSERTIONSORT_H
