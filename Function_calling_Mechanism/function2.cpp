// call by reference

#include<iostream>
using namespace std;

class Swap
{
public:
	void swap(int &a, int &b)   // int &a=x; // int &b=y; // here if we used & operator on the left side of assignment operator then it acts as a reference to x;
	{
		int temp = 0;
		temp = a;
		a = b;
		b = temp;
		cout << "Elements after swapping is : " << a << "\t" << b;

	}

};



int main()
{
	int x = 0, y = 0;
	cout << "Enter the two numbers: " << endl;
	cin >> x;
	cin >> y;

	cout << "Elements before swapping is : " << x << "\t" << y;

	Swap sobj;
	sobj.swap(x, y);      // call by reference

	return 0;
}