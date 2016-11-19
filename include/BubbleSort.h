#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "Sort.h"
#include <iostream>
#include <fstream>

class BubbleSort: public Sort
{
    public:
        BubbleSort();
        virtual ~BubbleSort();
//        using Sort::sort;
    void sort2(int vect[], int size) {
        int ok,aux,*v,numarElemente;

        ifstream f;
        f.open("fisierGenerat.txt");
        f>>numarElemente;
        v=new int [numarElemente];
        for(int i=0;i<numarElemente;i++)
            f>>v[i];
        do{
            ok=1;
            for(int i=0;i<numarElemente-1;i++)
            {

                if(v[i]>v[i+1])
                {
                    ok=0;
                    aux=v[i];
                    v[i]=v[i+1];
                    v[i+1]=aux;
                }
            }
        }while(ok!=1);
        cout<<endl;
        cout<<"Sortarea bulelor a avut loc cu succes";
        f.close();
    }
    protected:
    private:
};

#endif // BUBBLESORT_H
