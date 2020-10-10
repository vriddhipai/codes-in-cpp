#include<bits/stdc++.h>
using namespace std;
int apowerb(int a, int b)
{
	if(b<0)
	return 0;
	else if(b==0)
	return 1;
	else
	{
		return a*pow(a,b-1);
	}
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<apowerb(a,b);
	return 0;
}
