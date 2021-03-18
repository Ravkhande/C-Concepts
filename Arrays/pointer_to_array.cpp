

// Note : Array is internally considered as pointer 
#include<iostream>
using namespace std;

int main()
{
	int arr[] = {10,20,30,40,50};    // consider starting address of array as 100
	int *p = NULL;     //consider starting address of p as 200

	p = arr;
	cout << p;  // 100
	cout << arr; // 100
	cout << *p; // 10;
	cout << arr + 1; // 104;
	cout << &arr + 1; // 120;
	cout << arr[1]; // it is also written as *(arr+1) this shows array is internally considered as pointer 


	return 0;

}