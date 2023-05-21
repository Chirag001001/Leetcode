class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      sort(nums.begin(),nums.end());

      int p= nums[nums.size()-k];  

      return p; 
    }
};
