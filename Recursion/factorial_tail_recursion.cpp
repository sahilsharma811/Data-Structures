#include<iostream>
using namespace std;

// Head Recursion Approach..Multiplication in the end.. recursive call are made till the end.
int factorial_head(int num)
{
	if (num==1)
		return 1;
	else
	{
		return (num * factorial_head(num-1));
	}
}


// Tail Recurstion.. Computation side by side.
int factorial_i(int num, int prod)
{
	if (num==1)
		return prod;
	else
	{
		return factorial_i(num-1, prod*num);
	}
}

int factorial(int num)
{
	if (num==1)
		return 1;
	else
	{
		return factorial_i(num,1);
	}
}

int main()
{
	cout<<factorial_head(6);
	cout<<endl;
	cout<<factorial(5)<<endl;
	cout<<factorial_i(6,1);
	return 0;
}