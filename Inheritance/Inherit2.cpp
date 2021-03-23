#include<iostream>
// constructor calling sequence in Multilevel inheritance

// In MultiLevel Inheritance 
// constructor calling sequence: top to bottom
// destructor calling sequence: bottom to top

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

class Hello :public Demo
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

class Nano :public Hello
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