
// Private Inheritance:- In private Inheritance all the members of base class are private in derived class
/*
base class   Derived class
public     ->   Private
private    ->   private
protected   ->  private

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

class Derived :private Base
{
public:
	Derived()
	{
		i = 10;  // accessible
		j = 20; // not accessible
		k = 30;  //accessible

	}

};

/*
int main()
{
	Derived dobj;
	dobj.i = 1;  //not accessible
	dobj.j = 2; // not accessible
	dobj.k = 3;  // not accessible

	return 0;
}

*/