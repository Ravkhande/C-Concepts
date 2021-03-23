
// public Inheritance
// In public Inheritance all the members of base class are available as it is in derived class

/*
base class   Derived class
public     ->   public
private    ->   private
protected   ->  protected

*/

#include<iostream>
using namespace std;

class Base
{
public:
	int i;
private:
	int j;
protected:
	int k;

};

class Derived :public Base
{
public:
	Derived()
	{
		i = 10;  //accessible
		j = 20; // not accessible
		k = 30;  //accessible

	}
    
};

/*
int main()
{
	Derived dobj;
	dobj.i = 1;  //accessible
	dobj.j = 2; // not accessible
	dobj.k = 3;  // not accessible

	return 0;
}

*/