class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int a = n/2;
        vector <int> idx(1e6+2,0);
        vector <int> nidx(1e6+2,0);

        for(int i=0;i<n;i++){
            if(nums[i]>=0)
            idx[nums[i]] = idx[nums[i]] +1;
        }

        for(int i=0;i<n;i++){
            if(nums[i]<0)
            nidx[-nums[i]] = nidx[-nums[i]] +1;
        }

        for(int i=0;i<(1e6+2);i++){
            if(idx[i]>a){
                return i;
            }
        }

        for(int i=0;i<(1e6+2);i++){
            if(nidx[i]>a){
                return i;
            }
        }


        return -1;
    }
};
