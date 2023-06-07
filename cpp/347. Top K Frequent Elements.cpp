class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        int mini = INT_MAX;

        for(int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
            mini = min(nums[i],mini);
        }

        vector<int> v(maxi+1,0);
        vector<int> vn(-mini+1,0);
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
            v[nums[i]]++;
            }
            else{
                vn[-nums[i]]++;
            }
        }

        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        

        for(int i=0;i<k;i++){
            int maxi=INT_MIN;
            int idx=0;
            int t =true;
            for(int j=0;j<v.size();j++){
                if(maxi<v[j]){
                    maxi=v[j];
                    idx=j;
                    // cout<<idx<<" "<<v[j];
                }
            }

            for(int j=0;j<vn.size();j++){
                if(maxi<vn[j]){
                    maxi=vn[j];
                    idx=j;
                    // cout<<idx<<" "<<v[j];
                    t = false;
                }
            }

            if(t){
                v[idx]=0;
                ans.push_back(idx);
            }
            else{
                ans.push_back(-idx);
                vn[idx]=0;
            }
        }

        return ans;

    }
};
