class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        int maxi=INT_MIN;

        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        vector <int>ans(maxi+1,0);
        vector<int> anss;

        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }

        for(int i=0;i<=maxi;i++){
            if(ans[i]>1){
                anss.push_back(i);
            }
        }

        return anss;
    }
};
