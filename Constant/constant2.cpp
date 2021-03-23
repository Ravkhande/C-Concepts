
// constant object:- the characteristics of constant object are also constant and therefore it is not modifiable

#include <iostream>

using namespace std;

class ConstantObj
{
public:
    int i;
    int j;

    ConstantObj(int a = 10, int b = 20)
    {
        this->i = a;
        this->j = b;
    }
};

int main()
{

    ConstantObj cobj1;
    cobj1.i++; // Allowed
    cobj1.j++;

    const ConstantObj cobj;
    cobj.i++; // Not Allowed
    cobj.j++;

    return 0;
}