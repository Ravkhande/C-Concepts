
// constant function: is such a function whose contents of the caller object is not modifiable inside the constant function

#include <iostream>

using namespace std;

class ConstantFun
{
public:
    int i;
    int j;

    ConstantFun(int a = 10, int b = 20)
    {
        this->i = a;
        this->j = b;
    }

    void fun()
    {
        i++;
        j++;
    }

    void gun() const // inside constant function we can access only constant members
    {
        i++; // NA
        j++; // NA
    }
};

int main()
{
    ConstantFun cobj;
    cobj.fun();
    cobj.gun();

    cout << cobj.i << endl;
    cout << cobj.j << endl;

    const ConstantFun cobj1; // constant object only calls the constant function
    //cobj1.fun();
    cobj1.gun();

    cout << cobj1.i << endl;
    cout << cobj1.j << endl;

    return 0;
}