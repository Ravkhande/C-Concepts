
// protected Inheritance:- In protected inheritance
/*
base class   Derived class
public     ->   Protected
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

class Derived :protected Base
{
public:
	Derived()
	{
		i = 10;  // accessible
		j = 20; // not accessible
		k = 30;  //accessible

	}

};

class Hello :public Derived
{
public:
	Hello()
	{
		i = 21;    // accessible
		j = 23;     // not accessible
		k = 45;      // accessible
	}
};


int main()
{
	Hello hobj
	hobj.i = 1;  //not accessible
	hobj.j = 2; // not accessible
	hobj.k = 3;  // not accessible

	return 0;
}

