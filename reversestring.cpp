class Solution {
public:
	
	bool sortinrev(const pair<int,int> &a,  
               const pair<int,int> &b) 
	{ 
	       return (a.second > b.second); 
	} 
    void reverseString(vector<char>& s) {
    vector<pair<char, int>> vp;
        for(int i=0; i<s.size(); i++)
        {
            vp.push_back(make_pair(s[i],i));
        }
        sort(vp.rbegin(),vp.rend());
        for(int i=0; i<vp.size(); i++)
        {
            cout<<vp[i].first<<",";
        }
 }
};



