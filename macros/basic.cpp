#include <iostream>
#define in1 cin>>

#define inarr(a,n) for(int i=0;i<n;i++) cin>>a[i]

#define p_arr(a,n) for(int i=0; i<n; i++) cout<<a[i]<<" "

#define For(start,end) for(int i=start; i<end; i++)

using namespace std;

int main() {
	// your code goes here
	int n,arr[10];
	
	in1 n;
	inarr(arr,n);
	
	p_arr(arr,n);
	cout<<endl;
	
	For(1,4)
	cout<<arr[i]<<' ';
	
	return 0;
}
