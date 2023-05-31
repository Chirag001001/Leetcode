class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {


        vector <int> a;

        vector <int> idx(nums.size()+1,0);

        for(int i=0;i<nums.size();i++){
            idx[nums[i]]++;
        }

        for(int i=1;i<idx.size();i++){
            if(idx[i]==0){
                a.push_back(i);
            }
        }

        return a;
    }
};
