// Friend Concept:
//why we used : the concept of friend allows outsiders to acccess non-public members of class
// Friend concept used in 3 ways:

// 1) naked function can be friend of our class

#include<iostream>

using namespace std;

class Demo
{
    public:
    int i;
    private:
    int j;
    protected:
    int k;

    public:
    Demo(int a=10,int b=20,int c=30)
    {
        this->i=a;
        this->j=b;
        this->k=c;

    }

    ~Demo()
    {
        cout<<"Inside destructor"<<endl;
    }

    friend void gun();

};

void gun()        // naked function
{
     Demo *dobj=new Demo(11,22,33);

     cout<<dobj->i<<endl;
     cout<<dobj->j<<endl;
     cout<<dobj->k<<endl;

     delete dobj;


}

int main()
{
    gun();
    
     return 0;

}

