
// Friend concept used in 3 ways:

// 3) Another one class can be friend of our class

#include <iostream>
using namespace std;


class Marvellous
{
    public:
    void gun();
   
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

    void fun()
    {
        i++;
        j++;
        k++;
    }

    friend class Marvellous;

 
};

void Marvellous::gun()
{
     
    Demo dobj;
    dobj.fun();
    cout<<dobj.i<<endl;
    cout<<dobj.j<<endl;
    cout<<dobj.k<<endl;
 
}



int main()
{
    Marvellous mobj;
    mobj.gun();

    return 0;
}
