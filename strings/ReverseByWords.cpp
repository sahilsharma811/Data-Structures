#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char st[100];
	cout<<"Enter A String: ";
	cin.getline(st,100);
	int len = strlen(st);
	cout<<endl;
	for(int i=len-1; i>=0; i--)
	{
		if(st[i]==' ')
		{
			st[i]='\0';
			cout<<&(st[i])+1<<' ';
		}
	}
		
	cout<<st;
	cout<<endl;
	return 0;
}