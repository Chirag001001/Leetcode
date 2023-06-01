class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=0;
        while(pow(2,i)<=n){
            // cout<<pow(2,i)<<endl;
            if((pow(2,i))==n){
                return true;
            }
            i++;
        }
        return false;
    }
};
