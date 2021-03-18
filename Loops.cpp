/*
for Loop
why we used: when we Know the number of iteration then we used for loop
*/
// WAP to print name of company in 5 times:

#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		cout << "Intelizign"
			<< "\n";
	}
	return 0;
}

/*
while Loop
why we used : when we doesn't know the number of iteration but we know iterate that iterate the loop till a specific condition is true then we loop while loop
*/
// WAP to program to reverse a number till number not equal to 0

int main()
{
	int isum = 0, idigit = 0;
	int iNo = 123;
	while (iNo != 0)
	{
		idigit = iNo % 10;
		isum = isum * 10 + idigit;
		iNo = iNo / 10;
	}

	cout << "Reverse number is : " << isum;

	return 0;
}

/*
Do- While Loop:
do while loop is execute first time whether your condition is wrong or right, and then it checks the second condition

*/

int main()
{
	int i = 0, isum = 0;
	do
	{
		isum = isum + i;
		i++;
	} while (i < 10);

	cout << "sum is : " << isum << endl;

	return 0;
}
