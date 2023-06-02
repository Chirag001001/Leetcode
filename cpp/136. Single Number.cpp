class Solution {
public:
    int singleNumber(vector<int>& nums) {
    
    int maxi =0;
    int mini=0;

    for(int i=0;i<nums.size();i++){
        maxi = max(maxi,nums[i]);
        mini = min(mini,nums[i]);
    }

    vector <int> idx(maxi+1,0);
    vector <int> nidx(-mini+1,0);

    for(int i=0;i<nums.size();i++){
        if(nums[i]>=0)
        idx[nums[i]]++;
        if(nums[i]<0)
        nidx[-nums[i]]++;
    }

    for(int i=0;i<idx.size();i++){
        if(idx[i]==1){
            return i;
        }
    }

    for(int i=nidx.size()-1;i>0;i--){
        if(nidx[i]==1){
            return -i;
        }
    }
    return -1;
    }
};
