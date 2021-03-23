#include<iostream>
// constructor calling sequence in single level inheritance

// In single Level Inheritance 
// constructor calling sequence: Base class-> Derived class
// destructor calling sequence: Derived class -> Base class

using namespace std;

class Demo
{
public:
	Demo()
	{
		cout << "Inside base class Constructor" << endl;

	}
	~Demo()
	{
		cout << "Inside base class destructor" << endl;
	}
};

class Hello :public Demo
{
public:
	Hello()
	{
		cout << "Inside derived class Constructor" << endl;
	}
	~Hello()
	{
		cout << "Inside derived class destructor" << endl;

	}
};

/*
int main()
{
	Hello hobj;
	return 0;
}

*/