class Solution {
public:
    
    vector<int> dec2bin(int a){
        vector<int> op;
        
        while(a!=0){
            op.push_back(a%2);
            a = a/2;
        }
        
        reverse(op.begin(),op.end());
        return op;
    }
    
    int getSum(int a, int b) {
        vector<int> bin1 = dec2bin(a);
        vector<int> bin2 = dec2bin(b);
        
        reverse(bin1.begin(),bin1.end());
        reverse(bin2.begin(),bin2.end());
        
        if(bin1.size()>bin2.size()){
            int num = bin1.size() - bin2.size();
            for(int i=0;i<num;i++){
                bin2.push_back(0);
            }
        }
        else if(bin2.size()>bin1.size()){
            int num = bin2.size() - bin1.size();
            for(int i=0;i<num;i++){
                bin1.push_back(0);
            }
        }
        
        reverse(bin1.begin(),bin1.end());
        reverse(bin2.begin(),bin2.end());
        
        
    }
};
