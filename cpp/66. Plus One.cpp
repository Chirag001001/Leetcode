class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int a = digits.size();

        if(digits[a-1]!=9){
            digits[a-1]=digits[a-1]+1;
        }
        else{
            int i=a-1;
            while(digits[i]==9 && i>0){
                digits[i]=0;
                i=i-1;
            }
            
            if(digits[0]==9 &&i==0){
                digits[0]=1;
                digits.push_back(0);
            }else{
            digits[i]=digits[i]+1;
            }
        }
        return digits;
    }
};
