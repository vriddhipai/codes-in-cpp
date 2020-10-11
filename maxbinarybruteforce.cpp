class Solution {
public:
    int findMaxLength(vector<int>& nums) {
    int n = nums.size();
    if(n == 0)
        return 0;
    int maxarray= 0;
    for(int i =0; i< n; i++)
    {
        int zerocount =0;
        int onecount = 0;
        for(int j =i; j<n; j++)
        {
            if(nums[j] == 0)
                zerocount+=1;
            else
                onecount+=1;
            if(zerocount == onecount)
            {
                maxarray= max(maxarray,(j-i)+1);
            }
        }
    }
   
      return maxarray;
    }
};
