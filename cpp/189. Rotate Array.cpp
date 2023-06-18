class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n=nums.size();
        vector<int> temp(nums.size());
        for(int i=0;i<n;i++){
            // when it goes >=n then %n it automatically shifts to start of temp index 0 1 2...till k
            temp[(i+k)%n]=nums[i];
        }
        nums=temp;

        // int n=nums.size();
        // vector<int> temp(nums.size());


        // //k shift fill the array
        // for(int i=0;i<n-k;i++){
        //     temp[(i+k)]=nums[i];
        // }

        // //leftover k elements
        // for(int i=0;i<k;i++){
        //     temp[i]=nums[n-k+i];
        // }
        // nums=temp;


    }
    

};
