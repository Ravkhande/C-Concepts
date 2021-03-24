

// Array of pointer

// Note : Array is internally considered as pointer means arr[0]=*(arr[0])

#include<iostream>

using namespace std;

// consider address of array arr as 400

/*

int main()
{
	int p = 23, q = 34, r = 45;  // address-> p->100, q->200, r->300 
	int *arr[4];        // array of pointer

	arr[0] = &p;
	arr[1] = &q;
	arr[2] = &r;
	arr[3] = NULL;

	int **x = arr;

	cout << arr << endl;  // &(arr[0])->  // 400
	cout << arr + 1 << endl; // 404
	cout << &arr + 1 << endl;  // 416 
	cout << *(arr[0]) << endl; // 23
	cout << *(0[arr]) << endl;  // 23
	cout << arr[0] << endl;  // 100
	cout << *(arr[1]) << endl;  // 34
	cout << *(1[arr]) << endl;  // 34
	cout << arr[1] << endl;  // 200
	cout << *(arr[2]) << endl;  // 45
	cout << *(2[arr]) << endl;  // 45
	cout << arr[2] << endl;   // 300
	cout << x << endl;  // 400
	cout << **x << endl;  // 23

	return 0;

}

*/