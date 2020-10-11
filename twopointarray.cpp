#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,M; int sum=0;
	int num;
	cin>>N;
	cin>>M;
	int arr[100];
	for(int i=0; i<N; i++)
	{
		cin>>arr[i];
	}
	int op=0;
	sum+= arr[0];
	for(int i=0,j=0; i<N && j<N;)
	{
		if(sum<=M)
		{
			j++;
			sum+= arr[j];
			if(sum<=M)
			{
				op= max(op,sum);
				
			}
				
		}
		
		else if (sum>M)
		{
			sum-= arr[i];
			i++;
			if(sum<=M)
			{
				op= max(sum,op);
				
			}
				
		}	
			
	}
	cout<<op<<endl;
	return 0;
}
