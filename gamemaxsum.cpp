#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    long int arr[100];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int s_sum=0, d_sum=0;
    int s=1; //indicator of Sereja's turn
    for(int i=0, j=n-1; i<=j;)
    {
        if(arr[j]>arr[i])
        {
            if(s==1)
            {
                s_sum+= arr[j];
                s=0;
            }
            else	
            {
                d_sum+= arr[j];
                s=1;
            }
            j--;
        }
        else
        {
            if(s==1)
            {
                s_sum+= arr[i];
                s=0;
            }
            else
            {
                d_sum+= arr[i];
                s=1;    
            }
            i++;
        }
    }
    cout<<s_sum<<" "<<d_sum<<endl;
    return 0;
}
