
// constant input arguments to a function

#include <iostream>

using namespace std;

class ConstantArg
{
public:
    int i;
    int j;

    void fun(int a, const int b)
    {
        this->i = a++;
        this->j = b++;
    }
};

int main()
{
    ConstantArg cobj;
    cobj.fun(10, 20);

    cout << cobj.i << endl;
    cout << cobj.j << endl;

    return 0;
}