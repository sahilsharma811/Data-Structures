#include<iostream>
using namespace std;
int fibonacci(int n) // n is the index in the series.
{
	if (n==0)
		return 0;
	if (n==1)
		return 1;
	return (fibonacci(n-2) + fibonacci(n-1));
}

int main()
{
	for (int i =0; i<=10; i++) // for 10 terms.
	{
		cout<<fibonacci(i)<<' ';
	}
	return 0;
}