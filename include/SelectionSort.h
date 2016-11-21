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
    void sort(int vect[], int size)
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
        if(nrElemente<30){
            cout<<endl<<"Vectorul sortat este:"<<endl;
            for(int i=0;i<nrElemente;i++)
                cout<<v[i]<<" ";
        }
    }

    void sortg(int vect[], int size)
    {
        int nrElemente,aux,*v,q=0;
        nrElemente = size;
        cout<<endl<<endl<<"Selection Sort"<<endl;
        v = new int [nrElemente];
        for(int i=0;i<nrElemente;i++)
            v[i]=vect[i];

        for(int i=0;i<nrElemente-1;i++)
            for(int j=i+1;j<nrElemente;j++)
                if(v[i]>v[j])
                {
                    if(q==0)
                        cout<<"Vectorul initial: "<<endl;
                    else
                        cout<<"Mutarea "<<q<<": "<<endl;
                    for(int i=nrElemente; i>0;i--)
                    {
                        for(int j=0;j<nrElemente;j++)
                            if(v[j]>=i)
                                cout<<"_ ";
                            else
                                cout<<"  ";
                        cout<<endl;
                    }
                    aux=v[j];
                    v[j]=v[i];
                    v[i]=aux;
                    q++;
                }
        cout<<"Mutarea "<<q<<": "<<endl;
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

protected:
private:
};

#endif // SELECTIONSORT_H
