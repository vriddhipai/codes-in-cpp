class Solution {
public:
    
    string reverseString(string str)
    {
        char tmp;
        int i=0, j= str.size()-1;
        while(i<j)
        {
            tmp= str[i];
            str[i]= str[j];
            str[j]= tmp;
            i++;
            j--;
        }
        return str;
    }
    bool isPalindrome(string s) {
    int length;
    for(int i=0, length= s.size(); i<s.size(); i++)
    {
        if(ispunct(s[i]) || s[i]==' ')
        {
            s.erase(i--,1);
            length= s.size();       
        }
    }
        for(int i=0; i<s.size(); i++)
        {
            s[i]= tolower(s[i]);
        }
        string s1;
        s1.append(reverseString(s));
        if((s.compare(s1))==0)
            return true;
        return false;
    }
};
