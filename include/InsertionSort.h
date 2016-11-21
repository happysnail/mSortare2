#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include "Sort.h"
#include <iostream>

class InsertionSort: public Sort
{
public:
    InsertionSort();
    virtual ~InsertionSort();

    void sort(int vect[], int size){
        int nrElemente,*v,x,j;
        nrElemente = size;
        v = new int [nrElemente];
        for(int i=0;i<nrElemente;i++)
            v[i]=vect[i];

        for(int i=1;i<nrElemente;i++)
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
        if(nrElemente<30){
            cout<<endl<<"Vectorul sortat este:"<<endl;
            for(int i=0;i<nrElemente;i++)
                cout<<v[i]<<" ";
        }

    }
    void sortg(int vect[], int size)
    {
        int nrElemente,*v,x,j,q=0;
        cout<<endl<<endl<<"Insertion Sort."<<endl;
        nrElemente = size;
        v = new int [nrElemente];
        for(int i=0;i<nrElemente;i++)
            v[i]=vect[i];

        cout<<"Vectorul initial: "<<endl;
        q=1;
        for(int i=nrElemente; i>0;i--)
        {
            for(int j=0;j<nrElemente;j++)
                if(v[j]>=i)
                    cout<<"_ ";
                else
                    cout<<"  ";
            cout<<endl;
        }
        for(int i=1;i<nrElemente;i++)
        {
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
            cout<<"Mutarea "<<q<<": "<<endl;
            q++;
            for(int i=nrElemente; i>0;i--)
            {
                for(int j=0;j<nrElemente;j++)
                    if(v[j]>=i)
                        cout<<"_ ";
                    else
                        cout<<"  ";
                cout<<endl;
            }
        }
    }
protected:
private:
};

#endif // INSERTIONSORT_H
