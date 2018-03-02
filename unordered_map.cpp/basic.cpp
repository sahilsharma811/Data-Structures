#include<bits/stdc++.h>

using namespace std;
int main() {
	// your code goes here
    
    unordered_map <string, int> mp;
    
    mp["sahil"] = 98;
    mp["abc"] = 95;
    mp.insert(make_pair("xyz",90));
    
    unordered_map <string, int> :: iterator itr;
    
    cout<<"Key \t Elements\n";
    for (itr = mp.begin(); itr != mp.end(); itr++)
        {
            cout<< itr->first <<"\t"  <<itr->second <<endl;
        }
    cout<<endl;    
	return 0;
}

// compile using: g++ -std=c++0x try.cpp -o try