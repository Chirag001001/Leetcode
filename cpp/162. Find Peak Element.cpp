class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i-1]<nums[i] && nums[i+1]<nums[i]){
                return i;
            }
        }

        int a = max(nums[0],nums[nums.size()-1]);

        if(a==nums[0]){
        return 0;
        }
        else{
            return nums.size()-1;
        }
    }
};
