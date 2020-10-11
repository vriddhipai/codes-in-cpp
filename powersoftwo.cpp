//program to print powers of 2 from 1 throuhg n
#include<bits/stdc++.h>
using namespace std;
int powersoftwo(int n)
{
	if(n<0)
	return 0;
	else if(n==1)
	return 1;
	else
	{
		int prev= powersoftwo(n/2);
		int curr= prev*2;
		cout<<curr<<" ";
		return curr;
		
	}
}

int main()
{
	int n;
	cin>>n;
	powersoftwo(n);
	return 0;
}
