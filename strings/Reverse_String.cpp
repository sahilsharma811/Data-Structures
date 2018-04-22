#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char st[100];
	cout<<"Enter a String: ";
	cin.getline(st,100);
	int len = strlen(st);
	for(int i=0; i<len/2; i++)
	{
		char temp=st[i];
		st[i]=st[len-i-1];
		st[len-i-1] = temp;
	}
	cout<<"\nReversed String is : "<<st<<endl;
	return 0;
}