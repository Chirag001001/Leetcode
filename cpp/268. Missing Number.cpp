class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int maxi = nums.size()+1;
        vector <int> idx (maxi,0);


        for(int i=0;i<nums.size();i++){
            idx[nums[i]]++;
        }

        for(int i=0;i<idx.size();i++){
            if(idx[i]==0){
                return i;
            }
        }

        return -1;
    }
};
