#include "BubbleSort.h"
#include <iostream>
#include <fstream>

using namespace std;

BubbleSort::BubbleSort()
{
    //ctor
}

BubbleSort::~BubbleSort()
{
    //dtor
}

//suprascrierea functiilor
void sort(int vect[], int size){
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
