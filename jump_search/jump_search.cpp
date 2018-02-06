#include <bits/stdc++.h>
using namespace std;
int jump_search(int arr[], int value, int n)
{
    int step = sqrt(n); 
    int prev = 0;
    while (arr[min(step, n)-1]<value)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }

    while (arr[prev] < value)
    {
        prev++;
       	if (prev == min(step, n))
            return -1;
    }
    if (arr[prev] == value)
        return prev;
    return -1;
}

int main()
{
    int arr[] = { 10, 2, 4, 7, 8, 50, 89, 95, 115,
                 150, 240};

    int value = 115;
    int n = sizeof(arr)/sizeof(arr[0]);

    int index = jump_search(arr, value, n); 

    if (index!=-1)
	    cout<<"\nNumber "<<value<<" found at index: "<<index<<endl;
	else 
		cout<<"\nSearched Number not present"<<endl;    
    return 0;
}