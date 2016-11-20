#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

#include "include\Sort.h"
#include "include\BubbleSort.h"
#include "include\InsertionSort.h"
#include "include\SelectionSort.h"
#include "include\CountingSort.h"
#include "include\MergeSort.h"


using namespace std;

void generare();
void meniu();

int main()
{
    //generare();
    //int v1[8]={4,15,16,50,8,23,42,108};
    //int v1[8]={8,108,50,4,16,15,42,23};
    int v[6]={4,1,2,6,3,5};

    BubbleSort bubbleSort;          //g
    InsertionSort insertionSort;    //g
    SelectionSort selectionSort;    //g
    CountingSort countingSort;      //g
    MergeSort mergeSort;            //g

    Sort * ppoly1 = &bubbleSort;
    Sort * ppoly2 = &insertionSort;
    Sort * ppoly3 = &selectionSort;
    Sort * ppoly4 = &countingSort;
    Sort * ppoly5 = &mergeSort;

    Sort *vectO[5] = {ppoly1, ppoly2, ppoly3, ppoly4, ppoly5};

    //Pentru selectarea metodelor de sortare
//    int selMet[5];
//    cout<<endl<<"Puneti 1 pentru metodele de sortare dorite, si 0 in caz contrar.";
//    cout<<endl<<"1-Buble"<<endl<<"2-Insertie"<<endl<<"3-Selectie"<<endl<<"4-Numarare"<<endl;
//    for(int i=0;i<5;i++){
//        cout<<"Metoda de sortare nr "<<i+1<<":  ";
//        cin>>selMet[i];
//    }
    for(int i=0;i<5;i++){
        //if(selMet[i]==1)
            vectO[i]->sortg(v,6);
    }

    //vectO[4]->sortg(v,6);

    return 0;
}

void generare()
{
    int nrElemente = 10;
    ofstream h;
    h.open("fisierGenerat.txt");
    if(h.fail())
        cout<<"Erroare citire din fisier.";
    h<<nrElemente<<endl;
    for(int i=0; i<nrElemente; i++)
    {
        h<<rand()% 32676<<" ";
    }
    cout<<"Generarea a avut loc cu succes.";
    h.close();
}

void meniu()
{


}
