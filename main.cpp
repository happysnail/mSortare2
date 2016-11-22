#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <windows.h>
#include <conio.h>

#include "include\Sort.h"
#include "include\BubbleSort.h"
#include "include\InsertionSort.h"
#include "include\SelectionSort.h"
#include "include\CountingSort.h"
#include "include\MergeSort.h"

using namespace std;        //de terminat fct citireTastatura (teste)

int generare();
void meniu1();
void meniu2();
void meniu3();

int marime1,*vg,marime,*v;

int main()
{
    int v[11]={1,2,5,5,5,4,3,8,9,6,7};
    int marime = 11;
    int marime1;//pt vectorul generat
    LARGE_INTEGER start, end, freq;

    BubbleSort bubbleSort;
    InsertionSort insertionSort;
    SelectionSort selectionSort;
    CountingSort countingSort;
    MergeSort mergeSort;

    Sort * ppoly1 = &bubbleSort;
    Sort * ppoly2 = &insertionSort;
    Sort * ppoly3 = &selectionSort;
    Sort * ppoly4 = &countingSort;
    Sort * ppoly5 = &mergeSort;

    Sort *vectO[5] = {ppoly1, ppoly2, ppoly3, ppoly4, ppoly5};

//    QueryPerformanceFrequency(&freq);
//    QueryPerformanceCounter(&start);
//    QueryPerformanceCounter(&end);
//    cout<<endl<<"Timpul este:\t"<<(end.QuadPart - start.QuadPart)* 1000000 / freq.QuadPart;

    char c,d,e;
    do{
        meniu1();
        switch(c=getch()){
            case '1':
                marime1=generare();getch();break;
            case '4':
                do{

                    meniu2();
                    if(vg==NULL){cout<<endl<<"Vectorul nu este generat.";break;}
                        switch (d=getch()){
                        case '1':
                                int selMet[5];
                                system("cls");
                                cout<<endl<<"Puneti 1 pentru metodele de sortare dorite, si 0 in caz contrar.";
                                cout<<endl<<"1-Buble"<<endl<<"2-Insertion"<<endl<<"3-Selection"<<endl<<"4-Counting"<<endl<<"5-Merge"<<endl;
                                for(int i=0;i<5;i++){
                                    cout<<"Metoda de sortare nr "<<i+1<<":  ";
                                    cin>>selMet[i];
                                }
                                for(int i=0;i<5;i++){
                                    if(selMet[i]==1)
                                        vectO[i]->sort(vg,marime1);
                                }
                            getch();break;
                        case '3':
                                    do{
                                        meniu3();
                                        int eSortat=0;
                                        switch(e=getch()){
                                        case '1':
                                            vectO[0]->sort(v,marime);
                                            eSortat=1;
                                            getch();break;
                                        case '2':
                                            vectO[0]->sortg(v,marime);
                                            getch();break;
                                        case '3':
                                            getch();break;
                                        case '4':
                                            cout<<"Buble sort...";
                                            getch();break;
                                        case 'x': exit(0);
                                        }
                                    }while(e!='b');
                                    getch();break;
                        case '4':
                                    do{
                                        meniu3();
                                        int eSortat=0;
                                        switch(e=getch()){
                                        case '1':
                                            vectO[1]->sort(v,marime);
                                            eSortat=1;
                                            getch();break;
                                        case '2':
                                            vectO[1]->sortg(v,marime);
                                            getch();break;
                                        case '3':
                                            getch();break;
                                        case '4':
                                            cout<<"Inserction sort...";
                                            getch();break;
                                        case 'x':
                                            exit(0);
                                        }
                                    }while(e!='b');
                                    getch();break;
                        case '5':
                                    do{
                                        meniu3();
                                        int eSortat=0;
                                        switch(e=getch()){
                                        case '1':
                                            vectO[2]->sort(v,marime);
                                            eSortat=1;
                                            getch();break;
                                        case '2':
                                            vectO[2]->sortg(v,marime);
                                            getch();break;
                                        case '3':
                                            getch();break;
                                        case '4':
                                            cout<<"Selection sort...";
                                            getch();break;
                                        case 'x':
                                            exit(0);
                                        }
                                    }while(e!='b');
                                    getch();break;
                        case '6':
                                    do{
                                        meniu3();
                                        int eSortat=0;
                                        switch(e=getch()){
                                        case '1':
                                            vectO[3]->sort(v,marime);
                                            eSortat=1;
                                            getch();break;
                                        case '2':
                                            vectO[3]->sortg(v,marime);
                                            getch();break;
                                        case '3':
                                            getch();break;
                                        case '4':
                                            cout<<"Counting sort...";
                                            getch();break;
                                        case 'x':
                                            exit(0);
                                        }
                                    }while(e!='b');
                                    getch();break;
                        case '7':
                                    do{
                                        meniu3();
                                        int eSortat=0;
                                        switch(e=getch()){
                                        case '1':
                                            vectO[4]->sort(v,marime);
                                            eSortat=1;
                                            getch();break;
                                        case '2':
                                            vectO[4]->sortg(v,marime);
                                            getch();break;
                                        case '3':
                                            getch();break;
                                        case '4':
                                            cout<<"Merge sort...";
                                            getch();break;
                                        case 'x':
                                            exit(0);
                                        }
                                    }while(e!='b');
                                    getch();break;
                        case 'x': exit(0);
                        }

                    }while(d!='b');
                getch(); break;
            case 'x': exit(0);
        }
    }while(!0);
    return 0;
}

int generare()
{
    cout<<"Introdu numarul de elemente: ";
    cin>>marime1;
    ofstream h;
    h.open("fisierGenerat.txt");
    if(h.fail())
        cout<<"Erroare scriere in fisier.";
    h<<marime1<<endl;
    for(int i=0; i<marime1; i++)
        h<<rand()% 32000<<" ";
    cout<<"Generarea a avut loc cu succes.";
    h.close();
    ifstream f;
    f.open("fisierGenerat.txt",ios::out);
    if(f.fail())
        cout<<"desc";
    f>>marime1;
    vg = new int [marime1];
    cout<<marime1;
    for(int i=0;i<marime1;i++)
        f>>vg[i];
    f.close();
    return marime1;
}

int citireTastatura()
{
    cout<<"Introduceti marimea: ";
    cin>>marime;
    v = new int [marime];
    cout<<"Introduceti valori mai mici strict de 10";
    for(int i=0;i<marime;i++)
        cin>>v[i];
    return marime;
}

void meniu3()
{
    system("cls");
    cout << " 1-Sortarea vectorului citit de la tastatura si afisare;"<<endl;
    cout << " 2-Afiseaza vectorul citit de la tastatura sortat;"<<endl;
    cout << " 3-Clasament;"<<endl;
    cout << " 4-Info cod;"<<endl;
    cout << " b-Back;"<<endl;
    cout << " x-Exit.";
}

void meniu2(){
                    system("cls");
                    cout << " 1-Ruleaza metodele de comparare selectate;" << endl;
                    cout << " 2-Afisarea topul ultimei sortari;" << endl;
                    cout << " 3-Buble Sort;" << endl;
                    cout << " 4-Insertion Sort;" << endl;
                    cout << " 5-Selection Sort;" << endl;
                    cout << " 6-Counting Sort;" << endl;
                    cout << " 7-Merge Sort;" << endl;
                    cout << " b-Back;"<<endl;
                    cout << " x-Exit." << endl;
}

void meniu1(){
        system("cls");
        cout << " 1-Generare vector in fisier;" << endl;
        cout << " 2-Citeste vector de la tastatura + salvare in fisier;" << endl;
        cout << " 3-Sorteaza vectorul citit de la tastatura;" << endl;
        cout << " 4-Metode de sortare;" << endl;
        cout << " 5-Informatii;" << endl;
        cout << " x-Exit." << endl;
}
