class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {

        int maxi =INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }

        vector <int> count(maxi+1,0);

        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }

        int maxii = INT_MIN;
        for(int i=0;i<count.size();i++){
            maxii = max(maxii,count[i]);
        }

        // cout<<maxii;

        vector <vector<int>> v(maxii);


        for(int i=0;i<maxii;i++){
            for(int j=0;j<count.size();j++){
                if(count[j]==(maxii-i)){
                    v[i].push_back(j);
                    count[j]--;
                }
            }
        }
        return v;
    }
};
