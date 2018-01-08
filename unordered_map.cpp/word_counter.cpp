#include<bits/stdc++.h>
using namespace std;

void word_counter(string str)
{
    unordered_map <string, int> mp;
    string temp;
    int i=0,k=0;
    
    while(str[i]!='\0')
     {
        if(str[i]!=' ')
            temp[k++] = str[i];
        else
        {
            temp[k] = '\0';
            mp[temp]++;
            k=0;
        }
     }
     
    unordered_map<string, int>:: iterator it;
    
    for (it = mp.begin(); it != mp.end(); it++)
        {
            cout<<it->first<<"\t"<<it->second<<endl;
        }
    cout<<endl;    
}

int main() {
	// your code goes here
    
    string st;
    
    cout<<"Enter the string: ";
    cin>>st;
    
    cout<<endl;
    word_counter(st);
	
	return 0;
}