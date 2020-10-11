#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	vector<int>vec;
	for(int i=0; i<6;i++)
	{
		cin>>num;
		vec.push_back(num);
	}
	vector<pair<int,int> > vp;
	for(int i=0; i<vec.size();i++)
	{
		vp.push_back(make_pair(vec[i]%2, vec[i]));
	}
	sort(vp.begin(),vp.end());
	vector<int>vec2;
	for(int i=0; i<vp.size();i++)
	{
		vec2.push_back(vp[i].second);
	}
	for(int i=0; i<vp.size();i++)
	{
		cout<<vp[i].second<<" ";
	}
	return 0;
}
