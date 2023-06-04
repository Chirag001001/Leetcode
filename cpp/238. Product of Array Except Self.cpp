class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> v(nums.size(),1);

        int left_product =1;
        for(int i=1;i<nums.size();i++){
            left_product = left_product * nums[i-1];
            v[i]=left_product;
        }

        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }

        int right_product =1;
        for(int i=nums.size()-2;i>=0;i--){
            right_product = right_product * nums[i+1];
            v[i]=v[i]*right_product;   //imp
        }

        return v;
    }
};
