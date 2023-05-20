class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
            else if(nums[i]>target){
                return i;
            }
            else if(i==n-1 && nums[i]!=target){// that means inserted at last
                return nums.size();
            }
        }

        //empty array insert at 0
        return 0;
    }
};
