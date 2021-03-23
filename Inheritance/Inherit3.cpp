#include<iostream>
// constructor calling sequence in Multiple inheritance

// In Multiple Inheritance 
// constructor calling sequence: it depends on sequence in which we are inherit the classes
// destructor calling sequence: opposite to the constructor calling sequence

using namespace std;

class Demo
{
public:
	Demo()
	{
		cout << "Inside Demo class Constructor" << endl;

	}
	~Demo()
	{
		cout << "Inside Demo class destructor" << endl;
	}
};

class Hello
{
public:
	Hello()
	{
		cout << "Inside Hello class Constructor" << endl;
	}
	~Hello()
	{
		cout << "Inside Hello class destructor" << endl;

	}
};

class Nano :public Hello,Demo
{
public:
	Nano()
	{
		cout << "Inside Nano class constructor" << endl;
	}
	~Nano()
	{
		cout << "Inside Nano class destructor" << endl;
	}

};

/*
int main()
{
	Nano nobj;
	return 0;
}

*/