
/*
Program to find the minimum (or maximum) element of an array
*/

#include<iostream>
using namespace std;

void Maximum(int arr[])
{
	int iMax = 0, i = 0,length=0;
	iMax = arr[0];
	length = sizeof(arr) / sizeof(int);
	for (i = 0; i < length; i++)
	{
		if (arr[i] > iMax)
		{
			iMax = arr[i];
		}
	}

	cout << "Maximum element from array is : " << iMax;

}
void Minimum(int arr[])
{
	int iMin = 0, i = 0, length = 0;
	iMin = arr[0];
	length = sizeof(arr) / sizeof(int);
	for (i = 0; i < length; i++)
	{
		if (arr[i] < iMin)
		{
			iMin = arr[i];
		}
	}

	cout << "Minimum element from array is : " << iMin;


}



int main()
{
	const int size = 6;
	int arr[size];

	cout << "Enter the elements of array:" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	Maximum(arr);
	Minimum(arr);


	return 0;
}
