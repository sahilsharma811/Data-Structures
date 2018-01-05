#include <iostream>
// Defining Macros 
#define inp cin>>
#define inarr(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define p_arr(a,n) for(typeof(a[0]) i=0; i<n; i++) cout<<a[i]<<" "
#define For(start,end) for(int i=start; i<end; i++)
#define MAX(a,b) (a>b ? a:b)
// Defining constant
#define N 100  
#define M 200
// Defining Typedef
typedef long long ll;
typedef int my_int;

using namespace std;
int main() {
	// your code goes here
	my_int n,arr[10];
	ll var = 1002010020;
	inp n;
	inarr(arr,n);
	
	p_arr(arr,n);
	cout<<endl;
	
	For(1,4)
	cout<<arr[i]<<' ';
	
	cout<<endl;
	
	cout<<"Maximum is "<<MAX(N,M);
	cout<<endl<<"Long Long Double Varialble values is "<<var;
	return 0;
}