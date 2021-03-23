
// Friend concept used in 3 ways:

// 2) Member function of one class can be friend of our class

#include <iostream>
using namespace std;


class Hello
{
public:
    void sun();
};


class Demo
{
public:
    int i;

private:
    int j;

protected:
    int k;

public:
    Demo()
    {
        i = 10, j = 20, k = 30;
    }

    friend void Hello::sun();
};



void Hello::sun()
{
    Demo dobj;
    cout << dobj.i << endl;
    cout << dobj.j << endl;
    cout << dobj.k << endl;
}

int main()
{

    Hello hobj;
    hobj.sun();

    return 0;
}
