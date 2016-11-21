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
    int q=0;
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

    void sort(int vect[], int size)
    {
        nrElemente = size;
        v = new int [nrElemente];
        for(int i=0;i<nrElemente;i++)
            v[i+1]=vect[i];
        divimp(1,nrElemente);
        cout<<endl<<"Sortarea Merge a avut loc cu succes.";
        if(nrElemente<30){
            cout<<endl<<"Vectorul sortat este:"<<endl;
            for(int i=1;i<=nrElemente;i++)
                cout<<v[i]<<" ";
        }
    }

//Grafic

    void interclasg(int i,int m,int j)
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
        if(q==0)
            q=1;
        cout<<"Mutare :"<<q<<endl;
        q++;
        for(int i=nrElemente; i>0;i--)
        {
            for(int j=1;j<=nrElemente;j++)
                if(v[j]>=i)
                    cout<<"_ ";
                else
                    cout<<"  ";
            cout<<endl;
        }
        cout<<endl;
    }

    void divimpg(int i,int j)
    {
        if (i<j)
        {
            int m=(i+j)/2;
            divimpg(i,m);
            divimpg(m+1,j);
            interclasg(i,m,j);
        }
    }

    void sortg(int vect[], int size)
    {
        nrElemente = size;
        v = new int [nrElemente];
        cout<<endl<<endl<<"Merge Sort"<<endl;
        for(int i=0;i<nrElemente;i++)
            v[i+1]=vect[i];
        cout<<"Vectorul initial:"<<endl;
        for(int i=nrElemente; i>0;i--)
        {
            for(int j=1;j<=nrElemente;j++)
                if(v[j]>=i)
                    cout<<"_ ";
                else
                    cout<<"  ";
            cout<<endl;
        }
        divimpg(1,nrElemente);
    }

protected:
private:
};

#endif // MERGESORT_H
