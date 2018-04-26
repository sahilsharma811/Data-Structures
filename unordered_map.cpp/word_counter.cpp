#include<bits/stdc++.h>
using namespace std;

void word_counter(char st[100])
{
    unordered_map <string, int> mp;
    int len = strlen(st);
    for(int i=len-1; i>=0; i--)
    {
        if(st[i]==' ')
        {
            st[i]='\0';
            mp[&st[i+1]]++;
        }   
    }
    mp[st]++;
    unordered_map<string, int>:: iterator it;
    
    for (it = mp.begin(); it != mp.end(); it++)
        {
            cout<<it->first<<"\t"<<it->second<<endl;
        }
    cout<<endl;    
}

int main() {
 	char st[100];
    
    cout<<"Enter the string: ";
    cin.getline(st,100);
   
    word_counter(st);
	cout<<endl;
	return 0;
}
// compile in Shell using this command: g++ -std=c++0x word_counter.cpp -o word_counter