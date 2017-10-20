#include<bits/stdc++.h>
using namespace std;

int fact(int num)
{
	if (num==0)
		return 1;
	else
	{
		num *= fact(num-1);
		cout<<num<<endl;  
		return (num);       // return (num * fact(num-1)); //only this will work.
	}
}
int main()
{
	cout<<fact(10);
	return 0;
}

/* for n=4..fuction is executed as follow..
num = 4 * fact(3)
fact(3) = 3 * fact(2)
fact(2) = 2 * fact(1)
fact(1) = 1 * fact(0)
fact(0) = 1
*/