#include "Sort.h"
#include <sstream>

using namespace std;

Sort::Sort()
{
    nrElemente=5;
    vect= new int[nrElemente];
    vect[0]=3;
    vect[1]=1;
    vect[2]=5;
    vect[3]=2;
    vect[4]=4;
//    for(int i=0;i<nrElemente;i++)
//        vect[i]=i;
}

Sort::~Sort()
{
    //dtor
}

string Sort::afisare()
{
    ostringstream sir;
    for(int i=0;i<nrElemente;i++)
        sir<<vect[i]<<", ";
    return sir.str();
}


