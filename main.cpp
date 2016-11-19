#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

#include "include\Sort.h"
#include "include\BubbleSort.h"
#include "include\InsertionSort.h"
#include "include\SelectionSort.h"

using namespace std;

void generare();

int main()
{
    generare();
    int v[3]={1,2,3};

    BubbleSort bubbleSort;
    InsertionSort insertionSort;
    SelectionSort selectionSort;

    Sort * ppoly1 = &bubbleSort;
    Sort * ppoly2 = &insertionSort;
    Sort * ppoly3 = &selectionSort;

    Sort *vect[3] = {ppoly1, ppoly2, ppoly3};

    vect[0]->sort2(v,3);
    vect[1]->sort2(v,3);
    vect[2]->sort2(v,3);

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
