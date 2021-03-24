

// passing pointer to function as a function parameter it is also called as call by pointer

#include<iostream>

using namespace std;

void Swap(int *p, int *q)
{
	int temp = 0;
	temp = *p;
	*p = *q;
	*q = temp;

}

/*
int main()
{
	int no1 = 0, no2 = 0;
	cout << "Enter two numbers" << endl;
	cin >> no1;
	cin >> no2;

	cout <<"Numbers before Swapping:"<<"\t"<< no1 << "\t" << no2<<endl;

	Swap(&no1, &no2);

	cout <<"Number after swapping:"<<"\t"<< no1 << "\t" << no2 << endl;

	return 0;
}

*/