#include "InsertionSort.h"
#include <iostream>
#include <fstream>

InsertionSort::InsertionSort()
{
    //ctor
}

InsertionSort::~InsertionSort()
{
    //dtor
}

void sort(int vect[], int size){
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
    for(int i=0;i<numarElemente;i++)
        cout<<v[i]<<" ";
    f.close();
}
