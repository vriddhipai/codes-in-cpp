// HASH TABLE IMPLEMENTATION
#include<bits/stdc++.h>
using namespace std;
int Frequency[26];

    int hashFunc(char c)
    {
        return (c -'a');
    }
    void countFre(string S)
    {
        for(int i = 0;i < S.length();++i)
        {
            int index = hashFunc(S[i]);
            Frequency[index]++;
        }
        for(int i = 0;i < 26;++i)
            cout << (char)(i+'a') << " " << Frequency[i] << endl;
    }
    
int main()
{
	string S;
	cin>>S;
	countFre(S);
	return 0;
}
