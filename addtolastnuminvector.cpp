class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    long int temp=0;
    vector <int> vect;
    for(int i=0; i<digits.size(); i++)
    {
        temp= temp*10+digits[i];
    }
        temp+=1;
        long int n= temp;
        unsigned int num = 0;
        do {
             ++num; 
             n /= 10;
        } while (n);
        cout<<num<<endl;
        while(num--)
        {
            int mod= temp%10;
            vect.insert(vect.begin(),mod);
            temp= temp/10;
        }
        return vect;
    }
};
