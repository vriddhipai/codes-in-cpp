class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        if(paragraph.empty()) 
            return {};
        
        string res;
        unordered_set<string> banned_words(banned.begin(), banned.end());
        unordered_map<string, int> count_map;
        
        for (auto& ch : paragraph) {
            ch = isalpha(ch) ? tolower(ch) : ' ';
        }
        
        istringstream iss(paragraph);
        string word; 
        
        int max = INT_MIN;
        
        
        while(iss >> word) {
            if(banned_words.find(word) == banned_words.end()) {
                ++count_map[word];
                if(count_map[word] > max) {
                    max = count_map[word];
                    res = word;
                }
            }
        }
        
        return res;    
    }
};
