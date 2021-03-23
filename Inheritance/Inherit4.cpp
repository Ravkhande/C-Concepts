#include<iostream>
// constructor calling sequence in Hierachal inheritance

// In Hierarcal Inheritance 
// constructor calling sequence: 
// destructor calling sequence: 

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

class Hello:public Demo
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

class Nano:public Demo
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
	Hello hobj;
	Nano nobj;
	return 0;
}

*/