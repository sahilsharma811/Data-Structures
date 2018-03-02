#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char Text[100], Pattern[100];
	cout<<"Enter Text: ";
	cin.getline(Text, 100);
	
	cout<<"Enter Pattern To be searched: ";
	cin.getline(Pattern, 100);

	int TextLength=strlen(Text);
	int PatternLength=strlen(Pattern);
	int i,j,flag;

	for(i=0; i < TextLength; i++)
	{
		flag=1;
		for(j=0; j < PatternLength; j++)
		{
			if(Text[i+j]!=Pattern[j])
				flag=0;
		}
		if(flag==1)
		{
			cout<<"Pattern Found between "<<i<<" - "<<i+j<<endl;
		}
	}

	return 0;
}