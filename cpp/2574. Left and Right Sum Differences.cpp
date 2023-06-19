class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector <int> right (nums.size(),0);
        vector <int> left (nums.size(),0);
        vector <int> ans;

        for(int i=1;i<nums.size();i++){
            left[i]=left[i-1]+nums[i-1];
        }

        for(int i=nums.size()-2;i>=0;i--){
            right[i]=right[i+1]+nums[i+1];
        }

        // for(int i=0;i<nums.size();i++){
        //     cout<<right[i]<<" ";
        // }

        for(int i=0;i<nums.size();i++){
            ans.push_back(abs(-left[i]+right[i]));
        }

        return ans;
    }
};
