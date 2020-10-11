class Solution {
public:
    static bool comp(const string a, const string b) {
        int i = a.find_first_of(' ');
        int j = b.find_first_of(' ');
        string a1 = a.substr(0,i);
        string a2 = a.substr(i+1);
        string b1 = b.substr(0,j);
        string b2 = b.substr(j+1);
        return a2 != b2 ? a2 < b2 : a1 < b1;
            
    }
    
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> letter;
        vector<string> digit;
        int i;
        
        for(i = 0; i < logs.size(); i++) {
            int end = logs[i].size() - 1;
            if(logs[i][end] >= '0' && logs[i][end] <= '9') digit.push_back(logs[i]);
            else letter.push_back(logs[i]);
        }
        
        sort(letter.begin(), letter.end(), comp);
        letter.insert(letter.end(), digit.begin(), digit.end());
        return letter;
    }
};
