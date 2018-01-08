#include <iostream>
#include<map>
#include<iterator>

using namespace std;
int main() {
	// your code goes here
    
    map <int, int> mp;
    
    mp.insert(pair <int, int> (1,10));
    mp.insert(pair <int, int> (2,20));
    
    map <int, int> :: iterator itr;
    
    cout<<"Key \t Elements\n";
    for (itr = mp.begin(); itr != mp.end(); itr++)
        {
            cout<< itr->first <<"\t"  <<itr->second <<endl;
        }
    cout<<endl;    
	return 0;
}