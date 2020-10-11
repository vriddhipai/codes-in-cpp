#include<bits/stdc++.h>
using namespace std;
char char_set[128];
int hashfunc(char c)
{
	return (c-'a');
}
int isUnique(string s)
{
	if(s.size() > 128)
	return false; //since the alphabet in ASCII is 128 characters.
	 //In extended ASCII, it's 256 characters
	 for(int i=0; i<s.size(); i++)
	 {
	 	int val= hashfunc(s[i]);
	 	if(char_set[val])
	 	return 0;
	 }
	 return 1;
}

int main()
{
	string s;
	cin>>s;
	cout<<isUnique(s)<<endl;
	return 0;
}
