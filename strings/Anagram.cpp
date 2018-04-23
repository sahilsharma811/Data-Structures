#include<iostream>
using namespace std;
int main()
{
	char st1[100], st2[100];
	cout<<"Program to Check if Two Strings are Anagram of each other.\n";
	cout<<"Enter First String: ";
	cin.getline(st1,100);
	cout<<"Enter Second String: ";
	cin.getline(st2, 100);

	int map1[256]={0}, map2[256]={0};
	for(int i=0; st1[i]!='\0'; i++)
		{
			map1[st1[i]]++;
		}
	
	for(int i=0; st1[i]!='\0'; i++)
		{
			map2[st2[i]]++;
		}
	int flag = 1;
	for(int i=0; i<256; i++)
	{
		if (map1[i]!=map2[i])
		{
			flag=0; 
			break;
		}
	}	
	if(flag)
		cout<<"Strigs are Anagrams.\n";
	else
		cout<<"Strings are not Anagrams.\n";
	return 0;
}