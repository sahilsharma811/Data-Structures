#include<bits/stdc++.h>
using namespace std; 

int partition(int arr[], int begin, int end)
{
	int pivot = arr[end];

	int i = begin-1;

	for (int j=begin; j < end; j++)
	{
		if ( arr[j] <= pivot)
		{
			i++;
			swap(arr[i] , arr[j]);
		}
	}
	swap(arr[i+1] , arr[end]);
	return i+1;
}

void quick_sort(int arr[], int begin, int end)
{
	int pi;
	if (begin < end)
	{
		pi = partition(arr, begin, end);
		quick_sort(arr, begin, pi-1);
		quick_sort(arr, pi+1, end);
	}
}

int main()
{
	int arr[] = {15,1,43,51,56,20};
	int size = sizeof(arr)/sizeof(int);

	int begin = 0;
	int end = size - 1;

	cout<<"Initial Array: ";
	for(int i=0; i<size; i++)
		cout<<arr[i]<<' ';
	cout<<endl;

	quick_sort(arr, begin, end);

	cout<<"Sorted Array: ";
	for(int i=0; i<size; i++)
		cout<<arr[i]<<' ';
	cout<<endl;	

	return 0;
}