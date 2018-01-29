#include <iostream>
using namespace std;

int binary_search(int L, int R, int arr[], int value)
    {
        int mid;
     while(L<R)
      {
        mid = (L+R)/2;
        
        if(arr[mid]==value)
            return(mid);
        else if (arr[mid]<value)
            L=mid+1;
        else
            R=mid+1;
      }
      return (-1);
    }
    
int main() {
	// your code goes here
	int arr[]={9,12,41,54,56,78,99};
    int L=0;
    int R=sizeof(arr)/sizeof(int);
    int value = 78;
    int ans = binary_search(L,R,arr,value);
    if(ans==-1)
        cout<<"Value Not Found";
    else    
        cout<<value<<" found at :"<<ans+1;
	return 0;
}
