#include "citireAfisare.h"
#include <iostream>

using namespace std;

citireAfisare::citireAfisare()
{   cout<<"Introdu marimea:";cin>>marimet;
    vt=new int [marimet];
    cout<<endl<<"Introduceti valori mai mici decat 10!";
    for(int i=0;i<marimet;i++)
        cin>>vt[i];
}

citireAfisare::~citireAfisare()
{
    //dtor
}
