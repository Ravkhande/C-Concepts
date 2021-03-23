
// constant characteristics should be initialised immediately at the time of it's creation in c++

#include <iostream>

using namespace std;

class Constant
{
public:
    int i;
    const int j;
    // Parametrised constructor with default argument
    Constant(int a, int b = 23) : j(b) // member initialisation list
    {
        this->i = a;
        cout << this->i << endl;
        cout << this->j << endl;
        cout << "Inside constructor" << endl;
    }

    ~Constant()
    {
        cout << "Inside destructor" << endl;
    }
};

int main()
{
    Constant *cobj = NULL;
    cobj = new Constant(11);

    delete cobj;

    return 0;
}
