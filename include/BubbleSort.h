#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "Sort.h"
#include <iostream>

class BubbleSort: public Sort
{
public:
    BubbleSort();
    virtual ~BubbleSort();

    void sort(int vect[], int size) {
        int ok,aux,*v,nrElemente;

        nrElemente = size;
        v = new int [nrElemente];
        for(int i=0;i<nrElemente;i++)
            v[i]=vect[i];
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
        if(nrElemente<30){
            cout<<endl<<"Vectorul sortat este:"<<endl;
            for(int i=0;i<nrElemente;i++)
                cout<<v[i]<<" ";
        }
    }

    void sortg(int vect[], int size) {
        cout<<endl<<endl<<"Buble sort:"<<endl;
        int ok,aux,*v,nrElemente,q=0;

        nrElemente = size;
        v = new int [nrElemente];
        for(int i=0;i<nrElemente;i++)
            v[i]=vect[i];
        do{
            ok=1;
            for(int i=0;i<nrElemente-1;i++)
            {
                if(v[i]>v[i+1])
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
                    ok=0;
                    aux=v[i];
                    v[i]=v[i+1];
                    v[i+1]=aux;
                    q++;
                }
            }

        }while(ok!=1);
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
        cout<<endl;
    }
protected:
private:
};

#endif // BUBBLESORT_H
