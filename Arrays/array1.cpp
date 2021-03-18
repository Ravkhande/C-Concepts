
#include<iostream>

using namespace std;

int main()
{
	// single Dimensional array
	//Array Declaration
	int arr[] = { 10,20,30,40,50 };     // Type 1- member initialisation list // in this case the uninitialised elements are initialised with the zeros
	    // or
	int arr[6] = { 10,20,30,40,50 }; // it is better than previous one because in previous one if we want to insert the element at the 6 position then we have to write the whole array again 
	
	int arr[6];      // Type 2- Member by member initialisation // in this case the uninitialised elements are initialised with the default value which is depends on the storage classes
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;

	// Multi Dimensional Array

	int arr[3][5] = {{2,3,4,5,6},{1,2,3,6,7},{7,8,9,5,4}};    // both are correct
	         // or
	int arr[3][5] = {2,3,4,5,6,1,2,3,6,7,7,8,9,5,4};

	int arr[]; // Not Allowed

	int arr[-3];    // NA
	int arr[0];  // NA
	int arr[5.6];  // NA

	// size of the array should be compile time constant

	int i = 0;
	int arr[i];    // error because the value of variable may vary later

	const int j = 5;
	int arr[j] = { '\0' };    // it is Allowed

	const int arr[5] = { 10,20,30,40,50 }; // Allowed

	return 0;
}