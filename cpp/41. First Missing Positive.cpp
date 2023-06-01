#include <climits>
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        long maxi = INT_MIN;
        for(long i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi = nums[i];
            }
        }
        
if(maxi<0){
return 1;
}
        vector <bool> v (maxi+2,false);
        for(long i=0;i<nums.size();i++){
            if(nums[i]>0)
            v[nums[i]]=true;
        }

        for(long i=1;i<v.size();i++){
            if(v[i]==false){
                return i;
            }
        }
        return -1;
    }
};
