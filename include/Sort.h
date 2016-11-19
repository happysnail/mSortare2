#ifndef SORT_H
#define SORT_H
#include <string>

using namespace std;

class Sort
{
    public:
        int nrElemente;
        int *vect;
        Sort();
        string afisare();
        virtual void sort(int vect[], int size) = 0;
        virtual ~Sort();
    protected:
    private:
};

#endif // SORT_H
