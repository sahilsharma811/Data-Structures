#include<iostream>
using namespace std;

void merge(int Left[], int Right[], int arr[], int nL, int nR)
{
	int i,j,k;
	i=j=k=0;

	while(i<nL && j<nR)
	{
		if(Left[i] <= Right[j])
			arr[k++] = Left[i++];
		else
			arr[k++] = Right[j++];
	}

	while(i<nL)
		arr[k++] = Left[i++];

	while(j<nR)
		arr[k++] = Right[j++];
}

void merge_sort(int arr[], int size)
 {

 	if (size<2)
 		return;

 	int mid = size/2;
 	int Left[mid], Right[mid];

 	for (int i=0; i<=mid-1; i++)
 		Left[i] = arr[i];

 	for (int i=mid; i<size; i++)
 		Right[i-mid] = arr[i];

 	merge_sort(Left, mid);
 	merge_sort(Right, size-mid);
 	merge(Left, Right, arr, mid, size-mid);
 }

int main()
{
	int arr[] = {1,7,4,6,3,5,9,8};
	int size = sizeof(arr)/sizeof(int);

	cout<<"Initial Array: ";
	for (int i=0; i<size; i++)
		cout<<arr[i]<<' ';
	cout<<endl;

	merge_sort(arr, size);

	cout<<"Sorted Array (Merge Sort): ";
	for (int i=0; i<size; i++)
		cout<<arr[i]<<' ';
	cout<<endl;

	return 0;
}