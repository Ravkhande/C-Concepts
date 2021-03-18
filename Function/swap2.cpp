#include<iostream>

using namespace std;

/*
This program gives error because c++ follow top to bottom approach and the error is arises due to we don't declared the swap function before the main
to solve this error we have to declare it */

int main()
{
	int a = 0, b = 0, iResult = 0;
	cout << "Enter the two numbers:" << endl;
	cin >> a;
	cin >> b;

	cout << "number before swapping :" << a << "\t" << b << "\n";

	swap(a, b);

	return 0;

}

void swap(int a, int b)
{
	a = a + b;
	b = a - b;
	a = a - b;

	cout << "number after swapping : " << a << "\t" << b << "\n";

}