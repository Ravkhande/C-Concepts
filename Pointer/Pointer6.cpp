
// return pointer from function

#include<iostream>

using namespace std;

int * Fun(int arr[])
{
	const int size = sizeof(arr) / sizeof(int);
	int brr[size];
	for (int i = 0; i < size; i++)
	{
		brr[i] = arr[i];

	}

	return brr;

}


int main()
{
	int arr[4] = {8,3,6,2};
	int *p;
	p = Fun(arr);

	cout << *p << endl;
	



	return 0;
}