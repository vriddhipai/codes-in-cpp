//bubble sort
#include<bits/stdc++.h>
using namespace std;
int bubsort(int arr[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<i; j++)
		{
			if(arr[j]> arr[j+1])
			{
				int temp= arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
}

int main()
{
	int arr[50];
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	bubsort(arr,n);
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
