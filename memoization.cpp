#include<bits/stdc++.h>
using namespace std;
  int fib(int n, int memo[1000]) {
 if (n <= 0) return 0;
 else if (n == 1) return 1;
 else if (memo[n] > 0) return memo[n];

 memo[n] = fib(n - 1, memo)+ fib(n - 2, memo);
 return memo[n];
 } 
 void allFib(int n) {
 int memo[1000];
 for (int i= 0; i < n; i++) {
 cout<<i<<":"<<fib(i, memo);
 //System.out.println(i + ": "+ fib(i, memo));
 }
 }

int main()
{
	int n;
	cin>>n;
	allFib(n);
	return 0;
}
