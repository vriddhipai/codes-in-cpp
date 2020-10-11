#include<bits/stdc++.h>
using namespace std;
int fact(long int n)
{
    if(n<=1)
    return 1;
    else
    return n*fact(n-1);
}
 int gcd(long int a,long int b)
 {
 	return fact(min(a,b));
 }

int main()
{
    long int a,b;
    cin>>a>>b;
    long int z= gcd(a,b); 
    cout<<z<<endl;
    return 0;
}
