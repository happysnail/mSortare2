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

    void sort2(int vect[], int size) {
        int ok,aux,*v,nrElemente;

        nrElemente = size;
        v = new int [nrElemente];
        for(int i=0;i<nrElemente;i++)
            v[i]=vect[i];

        //ifstream f;
        //f.open("fisierGenerat.txt");
        //f>>nrElemente;
        //v=new int [nrElemente];
        //for(int i=0;i<nrElemente;i++)
            //f>>v[i];
        do{
            ok=1;
            for(int i=0;i<nrElemente-1;i++)
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
        //f.close();
    }
protected:
private:
};

#endif // BUBBLESORT_H
