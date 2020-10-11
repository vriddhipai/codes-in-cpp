#include<bits/stdc++.h>
using namespace std;
	void exchange(int i, int j)
    {
        int temp;
        temp= i;
        i=j;
        j= temp;
    }
    void moveZeroes(vector<int>& nums) {
    for(int i=0, j=i+1; i<nums.size() && j<nums.size();)
    {
        cout<<"Hello";
        if(nums[i]==0 && nums[j]>0)
        {
            exchange(nums[i],nums[j]);  
            i++;
            j++;
            continue;
        }
        else if(nums[i]==nums[j])
        { 
            j++;
            exchange(nums[i],nums[j]);
            i++;
            j++;
            continue;
        }
        else if(nums[i]>0 && nums[j]==0)
        {
            i++;
            j++;
            continue;
        }
        else
        continue;   
    }
    for(int i=0; i<nums.size(); i++)
    {
            cout<<nums[i];
    }
    }
int main()
{
	vector<int>vect;
	for(int i=0; i<vect.size(); i++)
	{
		cin>>vect[i];
		cout<<" ";
	}	
	moveZeroes(vect);
	return 0;
	
}  
