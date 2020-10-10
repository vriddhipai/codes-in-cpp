#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t,n;
    long int sum=0;
    cin>>n;
    cin>>t;
    int arr[10000];
    for(int i=0; i<n; i++)
    {
    	cin>>arr[i];
	}
    long int op=0;
    int count=0;
	sum+=arr[0];
    for(int i=0, j=0; i<n,j<n;)
    {
        if(sum>t)
        {
        	sum-= arr[i];
        	i++;
        	if(sum<=t) 
        	{
        		op= max(sum,op);
			}
		}
		else
		{
			j++;
			sum+= arr[j];
			if(sum<=t && sum!=0)
        	{
        		op= max(sum,op);
        		count++;
			}
			
		}
        
    }
    cout<<count<<endl;	
    return 0;
}
