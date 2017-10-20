#include<iostream>
using namespace std;

int sum_n(int num, int sum=0) //tail recursion.
{
	if (num==0)
		return sum;
	return sum_n(num-1, sum+num);
}

int sums(int num)
{
	if (num==0)
		return 0;
	return (num + sums(num-1));
}

int main()
{
	cout<<sum_n(10)<<endl;  // shows sum of first 10 terms from 1 to 10.
	cout<<sums(10);
	return 0;
}