#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[5000];
    int B[5000];
    int C[5000];
    int D[5000];
    int i;
    int n1,n2,n3;
    for(i=0; i<5000; i++)
    {
    	cin>>A[i];	
	}
	n1= A.size();
	for(i=0; i<n1; i++)
	{
		if(A[i]%2==0)
		B[i]= A[i];
	}
	n2= B.size();
	for(i=0; i<n2; i++)
	{
		if(A[i]%2!=0)
		C[i]= A[i];
	}
	n3= n1+n2;
	for(i=0; i<n2; i++)
	{
		D[i]= B[i];
	}
    for(i=n2; i<n3; i++)
	{
		D[i]= C[i];
	}
    for(i=0; i<n3; i++)
	{
		cout<<D[i]<<"";
	}
    
    return 0;
}
