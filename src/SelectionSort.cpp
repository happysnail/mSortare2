#include "SelectionSort.h"
#include <iostream>

SelectionSort::SelectionSort()
{
    //ctor
}

SelectionSort::~SelectionSort()
{
    //dtor
}

void Sort :: sort(int vect[], int size)
{
    int nrElemente,aux;
//    n=10;
//    for(int i=0;i<nrElemente;i++)
//        cin>>vect[i];
    for(int i=0;i<nrElemente-1;i++)
        for(int j=i+1;j<nrElemente;j++)
            if(vect[i]>vect[j])
            {
                aux=vect[j];
                vect[j]=vect[i];
                vect[i]=aux;
            }
    cout<<endl<<"/////////////////////////////////////////////////"<<endl;
    for(int i=0;i<nrElemente;i++)
        cout<<vect[i]<<" ";
    cout<<endl<<"Sortarea prin selectie a avut loc cu succes";

}
