#include<iostream>
using namespace std;

bool is_prime(int num, int i=2) // Works as a loop for i from 2 to num.
{
	if (num==i) // It reaches till the end and num was not divisible by any number till this. So Prime
		return 1;
	if (num%i == 0)
		return 0;
	return is_prime(num, i+1);	 
}

int main()
{
	int n;
	cout<<"Enter the number: ";
	std::cin>>n;
	if (is_prime(n))
		cout<<n<<" is a prime number";
	else
		cout<<n<<" is not a prime number";
}